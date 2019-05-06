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
   * <p>A request to delete the <a>ClientCertificate</a> resource.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/DeleteClientCertificateRequest">AWS
   * API Reference</a></p>
   */
  class AWS_APIGATEWAY_API DeleteClientCertificateRequest : public APIGatewayRequest
  {
  public:
    DeleteClientCertificateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteClientCertificate"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>[Required] The identifier of the <a>ClientCertificate</a> resource to be
     * deleted.</p>
     */
    inline const Aws::String& GetClientCertificateId() const{ return m_clientCertificateId; }

    /**
     * <p>[Required] The identifier of the <a>ClientCertificate</a> resource to be
     * deleted.</p>
     */
    inline bool ClientCertificateIdHasBeenSet() const { return m_clientCertificateIdHasBeenSet; }

    /**
     * <p>[Required] The identifier of the <a>ClientCertificate</a> resource to be
     * deleted.</p>
     */
    inline void SetClientCertificateId(const Aws::String& value) { m_clientCertificateIdHasBeenSet = true; m_clientCertificateId = value; }

    /**
     * <p>[Required] The identifier of the <a>ClientCertificate</a> resource to be
     * deleted.</p>
     */
    inline void SetClientCertificateId(Aws::String&& value) { m_clientCertificateIdHasBeenSet = true; m_clientCertificateId = std::move(value); }

    /**
     * <p>[Required] The identifier of the <a>ClientCertificate</a> resource to be
     * deleted.</p>
     */
    inline void SetClientCertificateId(const char* value) { m_clientCertificateIdHasBeenSet = true; m_clientCertificateId.assign(value); }

    /**
     * <p>[Required] The identifier of the <a>ClientCertificate</a> resource to be
     * deleted.</p>
     */
    inline DeleteClientCertificateRequest& WithClientCertificateId(const Aws::String& value) { SetClientCertificateId(value); return *this;}

    /**
     * <p>[Required] The identifier of the <a>ClientCertificate</a> resource to be
     * deleted.</p>
     */
    inline DeleteClientCertificateRequest& WithClientCertificateId(Aws::String&& value) { SetClientCertificateId(std::move(value)); return *this;}

    /**
     * <p>[Required] The identifier of the <a>ClientCertificate</a> resource to be
     * deleted.</p>
     */
    inline DeleteClientCertificateRequest& WithClientCertificateId(const char* value) { SetClientCertificateId(value); return *this;}

  private:

    Aws::String m_clientCertificateId;
    bool m_clientCertificateIdHasBeenSet;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
