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
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/model/Update.h>
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
namespace EKS
{
namespace Model
{
  class AWS_EKS_API UpdateClusterVersionResult
  {
  public:
    UpdateClusterVersionResult();
    UpdateClusterVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateClusterVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The full description of the specified update</p>
     */
    inline const Update& GetUpdate() const{ return m_update; }

    /**
     * <p>The full description of the specified update</p>
     */
    inline void SetUpdate(const Update& value) { m_update = value; }

    /**
     * <p>The full description of the specified update</p>
     */
    inline void SetUpdate(Update&& value) { m_update = std::move(value); }

    /**
     * <p>The full description of the specified update</p>
     */
    inline UpdateClusterVersionResult& WithUpdate(const Update& value) { SetUpdate(value); return *this;}

    /**
     * <p>The full description of the specified update</p>
     */
    inline UpdateClusterVersionResult& WithUpdate(Update&& value) { SetUpdate(std::move(value)); return *this;}

  private:

    Update m_update;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
