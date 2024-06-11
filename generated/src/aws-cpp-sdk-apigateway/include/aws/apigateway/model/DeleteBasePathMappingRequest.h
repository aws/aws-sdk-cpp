/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/apigateway/APIGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace APIGateway
{
namespace Model
{

  /**
   * <p>A request to delete the BasePathMapping resource.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/DeleteBasePathMappingRequest">AWS
   * API Reference</a></p>
   */
  class DeleteBasePathMappingRequest : public APIGatewayRequest
  {
  public:
    AWS_APIGATEWAY_API DeleteBasePathMappingRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteBasePathMapping"; }

    AWS_APIGATEWAY_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The domain name of the BasePathMapping resource to delete.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }
    inline DeleteBasePathMappingRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}
    inline DeleteBasePathMappingRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}
    inline DeleteBasePathMappingRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The base path name of the BasePathMapping resource to delete.</p> <p>To
     * specify an empty base path, set this parameter to <code>'(none)'</code>.</p>
     */
    inline const Aws::String& GetBasePath() const{ return m_basePath; }
    inline bool BasePathHasBeenSet() const { return m_basePathHasBeenSet; }
    inline void SetBasePath(const Aws::String& value) { m_basePathHasBeenSet = true; m_basePath = value; }
    inline void SetBasePath(Aws::String&& value) { m_basePathHasBeenSet = true; m_basePath = std::move(value); }
    inline void SetBasePath(const char* value) { m_basePathHasBeenSet = true; m_basePath.assign(value); }
    inline DeleteBasePathMappingRequest& WithBasePath(const Aws::String& value) { SetBasePath(value); return *this;}
    inline DeleteBasePathMappingRequest& WithBasePath(Aws::String&& value) { SetBasePath(std::move(value)); return *this;}
    inline DeleteBasePathMappingRequest& WithBasePath(const char* value) { SetBasePath(value); return *this;}
    ///@}
  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::String m_basePath;
    bool m_basePathHasBeenSet = false;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
