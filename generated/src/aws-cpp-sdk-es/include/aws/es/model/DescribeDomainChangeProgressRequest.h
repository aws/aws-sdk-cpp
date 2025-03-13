/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/es/ElasticsearchServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace ElasticsearchService
{
namespace Model
{

  /**
   * <p>Container for the parameters to the <code>DescribeDomainChangeProgress</code>
   * operation. Specifies the domain name and optional change specific identity for
   * which you want progress information. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/DescribeDomainChangeProgressRequest">AWS
   * API Reference</a></p>
   */
  class DescribeDomainChangeProgressRequest : public ElasticsearchServiceRequest
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API DescribeDomainChangeProgressRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeDomainChangeProgress"; }

    AWS_ELASTICSEARCHSERVICE_API Aws::String SerializePayload() const override;

    AWS_ELASTICSEARCHSERVICE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The domain you want to get the progress information about.</p>
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    DescribeDomainChangeProgressRequest& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The specific change ID for which you want to get progress information. This
     * is an optional parameter. If omitted, the service returns information about the
     * most recent configuration change. </p>
     */
    inline const Aws::String& GetChangeId() const { return m_changeId; }
    inline bool ChangeIdHasBeenSet() const { return m_changeIdHasBeenSet; }
    template<typename ChangeIdT = Aws::String>
    void SetChangeId(ChangeIdT&& value) { m_changeIdHasBeenSet = true; m_changeId = std::forward<ChangeIdT>(value); }
    template<typename ChangeIdT = Aws::String>
    DescribeDomainChangeProgressRequest& WithChangeId(ChangeIdT&& value) { SetChangeId(std::forward<ChangeIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::String m_changeId;
    bool m_changeIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
