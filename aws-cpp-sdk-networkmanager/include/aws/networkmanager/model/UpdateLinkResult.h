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
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/model/Link.h>
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
namespace NetworkManager
{
namespace Model
{
  class AWS_NETWORKMANAGER_API UpdateLinkResult
  {
  public:
    UpdateLinkResult();
    UpdateLinkResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateLinkResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the link.</p>
     */
    inline const Link& GetLink() const{ return m_link; }

    /**
     * <p>Information about the link.</p>
     */
    inline void SetLink(const Link& value) { m_link = value; }

    /**
     * <p>Information about the link.</p>
     */
    inline void SetLink(Link&& value) { m_link = std::move(value); }

    /**
     * <p>Information about the link.</p>
     */
    inline UpdateLinkResult& WithLink(const Link& value) { SetLink(value); return *this;}

    /**
     * <p>Information about the link.</p>
     */
    inline UpdateLinkResult& WithLink(Link&& value) { SetLink(std::move(value)); return *this;}

  private:

    Link m_link;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
