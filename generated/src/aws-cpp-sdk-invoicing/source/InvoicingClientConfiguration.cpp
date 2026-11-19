/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/invoicing/InvoicingClientConfiguration.h>

namespace Aws {
namespace Invoicing {

void InvoicingClientConfiguration::LoadInvoicingSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::ClientConfiguration::LoadConfigFromEnvOrProfile("AWS_USE_FIPS_ENDPOINT", this->profileName, "use_fips_endpoint",
                                                                         {"true", "false"}, "false") == "true";
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

InvoicingClientConfiguration::InvoicingClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadInvoicingSpecificConfig(this->profileName);
}

InvoicingClientConfiguration::InvoicingClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadInvoicingSpecificConfig(Aws::String(inputProfileName));
}

InvoicingClientConfiguration::InvoicingClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadInvoicingSpecificConfig(this->profileName);
}

InvoicingClientConfiguration::InvoicingClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadInvoicingSpecificConfig(this->profileName);
}

}  // namespace Invoicing
}  // namespace Aws
