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
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/Workteam.h>
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
namespace SageMaker
{
namespace Model
{
  class AWS_SAGEMAKER_API UpdateWorkteamResult
  {
  public:
    UpdateWorkteamResult();
    UpdateWorkteamResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateWorkteamResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A <code>Workteam</code> object that describes the updated work team.</p>
     */
    inline const Workteam& GetWorkteam() const{ return m_workteam; }

    /**
     * <p>A <code>Workteam</code> object that describes the updated work team.</p>
     */
    inline void SetWorkteam(const Workteam& value) { m_workteam = value; }

    /**
     * <p>A <code>Workteam</code> object that describes the updated work team.</p>
     */
    inline void SetWorkteam(Workteam&& value) { m_workteam = std::move(value); }

    /**
     * <p>A <code>Workteam</code> object that describes the updated work team.</p>
     */
    inline UpdateWorkteamResult& WithWorkteam(const Workteam& value) { SetWorkteam(value); return *this;}

    /**
     * <p>A <code>Workteam</code> object that describes the updated work team.</p>
     */
    inline UpdateWorkteamResult& WithWorkteam(Workteam&& value) { SetWorkteam(std::move(value)); return *this;}

  private:

    Workteam m_workteam;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
