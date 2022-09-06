/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/OpenSearchServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>Container for the parameters to the <code> <a>StartServiceSoftwareUpdate</a>
   * </code> operation. Specifies the name of the domain to schedule a service
   * software update for. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/StartServiceSoftwareUpdateRequest">AWS
   * API Reference</a></p>
   */
  class AWS_OPENSEARCHSERVICE_API StartServiceSoftwareUpdateRequest : public OpenSearchServiceRequest
  {
  public:
    StartServiceSoftwareUpdateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartServiceSoftwareUpdate"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The name of the domain that you want to update to the latest service
     * software.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The name of the domain that you want to update to the latest service
     * software.</p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p>The name of the domain that you want to update to the latest service
     * software.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The name of the domain that you want to update to the latest service
     * software.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p>The name of the domain that you want to update to the latest service
     * software.</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>The name of the domain that you want to update to the latest service
     * software.</p>
     */
    inline StartServiceSoftwareUpdateRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The name of the domain that you want to update to the latest service
     * software.</p>
     */
    inline StartServiceSoftwareUpdateRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>The name of the domain that you want to update to the latest service
     * software.</p>
     */
    inline StartServiceSoftwareUpdateRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}

  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
