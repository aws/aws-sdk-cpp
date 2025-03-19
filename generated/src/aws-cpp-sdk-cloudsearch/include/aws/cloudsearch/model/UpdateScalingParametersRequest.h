/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudsearch/CloudSearch_EXPORTS.h>
#include <aws/cloudsearch/CloudSearchRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudsearch/model/ScalingParameters.h>
#include <utility>

namespace Aws
{
namespace CloudSearch
{
namespace Model
{

  /**
   * <p>Container for the parameters to the
   * <code><a>UpdateScalingParameters</a></code> operation. Specifies the name of the
   * domain you want to update and the scaling parameters you want to
   * configure.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/UpdateScalingParametersRequest">AWS
   * API Reference</a></p>
   */
  class UpdateScalingParametersRequest : public CloudSearchRequest
  {
  public:
    AWS_CLOUDSEARCH_API UpdateScalingParametersRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateScalingParameters"; }

    AWS_CLOUDSEARCH_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDSEARCH_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    UpdateScalingParametersRequest& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ScalingParameters& GetScalingParameters() const { return m_scalingParameters; }
    inline bool ScalingParametersHasBeenSet() const { return m_scalingParametersHasBeenSet; }
    template<typename ScalingParametersT = ScalingParameters>
    void SetScalingParameters(ScalingParametersT&& value) { m_scalingParametersHasBeenSet = true; m_scalingParameters = std::forward<ScalingParametersT>(value); }
    template<typename ScalingParametersT = ScalingParameters>
    UpdateScalingParametersRequest& WithScalingParameters(ScalingParametersT&& value) { SetScalingParameters(std::forward<ScalingParametersT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    ScalingParameters m_scalingParameters;
    bool m_scalingParametersHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudSearch
} // namespace Aws
