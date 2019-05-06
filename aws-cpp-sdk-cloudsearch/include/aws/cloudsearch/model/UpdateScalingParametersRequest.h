/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_CLOUDSEARCH_API UpdateScalingParametersRequest : public CloudSearchRequest
  {
  public:
    UpdateScalingParametersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateScalingParameters"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    
    inline UpdateScalingParametersRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    
    inline UpdateScalingParametersRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    
    inline UpdateScalingParametersRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    
    inline const ScalingParameters& GetScalingParameters() const{ return m_scalingParameters; }

    
    inline bool ScalingParametersHasBeenSet() const { return m_scalingParametersHasBeenSet; }

    
    inline void SetScalingParameters(const ScalingParameters& value) { m_scalingParametersHasBeenSet = true; m_scalingParameters = value; }

    
    inline void SetScalingParameters(ScalingParameters&& value) { m_scalingParametersHasBeenSet = true; m_scalingParameters = std::move(value); }

    
    inline UpdateScalingParametersRequest& WithScalingParameters(const ScalingParameters& value) { SetScalingParameters(value); return *this;}

    
    inline UpdateScalingParametersRequest& WithScalingParameters(ScalingParameters&& value) { SetScalingParameters(std::move(value)); return *this;}

  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet;

    ScalingParameters m_scalingParameters;
    bool m_scalingParametersHasBeenSet;
  };

} // namespace Model
} // namespace CloudSearch
} // namespace Aws
