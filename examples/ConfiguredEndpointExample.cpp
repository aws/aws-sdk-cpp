/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/config/ConfiguredEndpointResolver.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <iostream>

using namespace Aws::Config;
using namespace Aws::Client;

/**
 * Example showing how to integrate ConfiguredEndpointResolver into a service client.
 * This would typically be done in the client constructor.
 */
void ExampleClientIntegration() {
    // Example client configuration
    ClientConfiguration config;
    config.region = "us-east-1";
    config.profileName = "default";
    config.ignoreConfiguredEndpointUrls = false; // Allow configured endpoints
    
    // Service ID for the client (e.g., "S3", "DynamoDB", "Elastic Beanstalk")
    const Aws::String serviceId = "S3";
    
    // Check for configured endpoint
    auto resolved = ConfiguredEndpointResolver::ResolveForService(
        serviceId,
        config.profileName,
        config.ignoreConfiguredEndpointUrls
    );
    
    if (resolved) {
        // Use the configured endpoint
        config.endpointOverride = resolved->url;
        
        // Log the source for debugging (TRACE level only per SEP)
        const char* sourceStr = "";
        switch (resolved->source) {
            case EndpointSource::ServiceEnvVar:
                sourceStr = "service environment variable";
                break;
            case EndpointSource::GlobalEnvVar:
                sourceStr = "global environment variable";
                break;
            case EndpointSource::ServiceSharedConfig:
                sourceStr = "service shared configuration";
                break;
            case EndpointSource::GlobalSharedConfig:
                sourceStr = "global shared configuration";
                break;
            default:
                sourceStr = "unknown";
                break;
        }
        
        AWS_LOGSTREAM_TRACE("ConfiguredEndpointExample", 
            "Using configured endpoint URL from " << sourceStr << ": " << resolved->url);
        
        std::cout << "Configured endpoint: " << resolved->url << " (from " << sourceStr << ")" << std::endl;
    } else {
        std::cout << "No configured endpoint found, using default endpoint resolution" << std::endl;
    }
    
    // Continue with normal client initialization...
    // The config.endpointOverride will be used by the client if set
}

int main() {
    std::cout << "ConfiguredEndpointResolver Example" << std::endl;
    std::cout << "===================================" << std::endl;
    
    ExampleClientIntegration();
    
    return 0;
}