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
#include <aws/worklink/WorkLink_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace WorkLink
{
namespace Model
{
  class AWS_WORKLINK_API AssociateWebsiteCertificateAuthorityResult
  {
  public:
    AssociateWebsiteCertificateAuthorityResult();
    AssociateWebsiteCertificateAuthorityResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AssociateWebsiteCertificateAuthorityResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A unique identifier for the CA.</p>
     */
    inline const Aws::String& GetWebsiteCaId() const{ return m_websiteCaId; }

    /**
     * <p>A unique identifier for the CA.</p>
     */
    inline void SetWebsiteCaId(const Aws::String& value) { m_websiteCaId = value; }

    /**
     * <p>A unique identifier for the CA.</p>
     */
    inline void SetWebsiteCaId(Aws::String&& value) { m_websiteCaId = std::move(value); }

    /**
     * <p>A unique identifier for the CA.</p>
     */
    inline void SetWebsiteCaId(const char* value) { m_websiteCaId.assign(value); }

    /**
     * <p>A unique identifier for the CA.</p>
     */
    inline AssociateWebsiteCertificateAuthorityResult& WithWebsiteCaId(const Aws::String& value) { SetWebsiteCaId(value); return *this;}

    /**
     * <p>A unique identifier for the CA.</p>
     */
    inline AssociateWebsiteCertificateAuthorityResult& WithWebsiteCaId(Aws::String&& value) { SetWebsiteCaId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the CA.</p>
     */
    inline AssociateWebsiteCertificateAuthorityResult& WithWebsiteCaId(const char* value) { SetWebsiteCaId(value); return *this;}

  private:

    Aws::String m_websiteCaId;
  };

} // namespace Model
} // namespace WorkLink
} // namespace Aws
