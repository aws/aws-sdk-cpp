/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/elasticbeanstalk/ElasticBeanstalkRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ElasticBeanstalk
{
namespace Model
{

  /**
   * <p>Results message indicating whether a CNAME is available.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/CheckDNSAvailabilityMessage">AWS
   * API Reference</a></p>
   */
  class CheckDNSAvailabilityRequest : public ElasticBeanstalkRequest
  {
  public:
    AWS_ELASTICBEANSTALK_API CheckDNSAvailabilityRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CheckDNSAvailability"; }

    AWS_ELASTICBEANSTALK_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICBEANSTALK_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The prefix used when this CNAME is reserved.</p>
     */
    inline const Aws::String& GetCNAMEPrefix() const { return m_cNAMEPrefix; }
    inline bool CNAMEPrefixHasBeenSet() const { return m_cNAMEPrefixHasBeenSet; }
    template<typename CNAMEPrefixT = Aws::String>
    void SetCNAMEPrefix(CNAMEPrefixT&& value) { m_cNAMEPrefixHasBeenSet = true; m_cNAMEPrefix = std::forward<CNAMEPrefixT>(value); }
    template<typename CNAMEPrefixT = Aws::String>
    CheckDNSAvailabilityRequest& WithCNAMEPrefix(CNAMEPrefixT&& value) { SetCNAMEPrefix(std::forward<CNAMEPrefixT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_cNAMEPrefix;
    bool m_cNAMEPrefixHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
