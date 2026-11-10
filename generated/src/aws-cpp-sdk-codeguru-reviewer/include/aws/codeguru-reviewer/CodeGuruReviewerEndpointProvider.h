/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-reviewer/CodeGuruReviewerClientConfiguration.h>
#include <aws/codeguru-reviewer/CodeGuruReviewer_EXPORTS.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace CodeGuruReviewer {
namespace Endpoint {
using CodeGuruReviewerClientConfiguration = Aws::CodeGuruReviewer::CodeGuruReviewerClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using CodeGuruReviewerClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_CODEGURUREVIEWER_API CodeGuruReviewerBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~CodeGuruReviewerBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const CodeGuruReviewerClientConfiguration& config);
  virtual void SetFromClientConfiguration(const CodeGuruReviewerClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const CodeGuruReviewerClientConfiguration& config);
};

/**
 * The type for the CodeGuruReviewer Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using CodeGuruReviewerEndpointProviderBase =
    EndpointProviderBase<CodeGuruReviewerClientConfiguration, CodeGuruReviewerBuiltInParameters, CodeGuruReviewerClientContextParameters>;

using CodeGuruReviewerDefaultEpProviderBase =
    BDDEndpointProvider<CodeGuruReviewerClientConfiguration, CodeGuruReviewerBuiltInParameters, CodeGuruReviewerClientContextParameters>;

}  // namespace Endpoint
}  // namespace CodeGuruReviewer

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_CODEGURUREVIEWER_EXTERN template class AWS_CODEGURUREVIEWER_API Aws::Endpoint::EndpointProviderBase<
    CodeGuruReviewer::Endpoint::CodeGuruReviewerClientConfiguration, CodeGuruReviewer::Endpoint::CodeGuruReviewerBuiltInParameters,
    CodeGuruReviewer::Endpoint::CodeGuruReviewerClientContextParameters>;

AWS_CODEGURUREVIEWER_EXTERN template class AWS_CODEGURUREVIEWER_API Aws::Endpoint::BDDEndpointProvider<
    CodeGuruReviewer::Endpoint::CodeGuruReviewerClientConfiguration, CodeGuruReviewer::Endpoint::CodeGuruReviewerBuiltInParameters,
    CodeGuruReviewer::Endpoint::CodeGuruReviewerClientContextParameters>;
}  // namespace Endpoint

namespace CodeGuruReviewer {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_CODEGURUREVIEWER_API CodeGuruReviewerEndpointProvider : public CodeGuruReviewerDefaultEpProviderBase {
 public:
  using CodeGuruReviewerResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  CodeGuruReviewerEndpointProvider();

  ~CodeGuruReviewerEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace CodeGuruReviewer
}  // namespace Aws
