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
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/outposts/model/Outpost.h>
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
namespace Outposts
{
namespace Model
{
  class AWS_OUTPOSTS_API GetOutpostResult
  {
  public:
    GetOutpostResult();
    GetOutpostResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetOutpostResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Outpost& GetOutpost() const{ return m_outpost; }

    
    inline void SetOutpost(const Outpost& value) { m_outpost = value; }

    
    inline void SetOutpost(Outpost&& value) { m_outpost = std::move(value); }

    
    inline GetOutpostResult& WithOutpost(const Outpost& value) { SetOutpost(value); return *this;}

    
    inline GetOutpostResult& WithOutpost(Outpost&& value) { SetOutpost(std::move(value)); return *this;}

  private:

    Outpost m_outpost;
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws
