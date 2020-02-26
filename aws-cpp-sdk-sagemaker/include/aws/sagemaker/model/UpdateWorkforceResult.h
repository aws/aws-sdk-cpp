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
#include <aws/sagemaker/model/Workforce.h>
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
  class AWS_SAGEMAKER_API UpdateWorkforceResult
  {
  public:
    UpdateWorkforceResult();
    UpdateWorkforceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateWorkforceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A single private workforce, which is automatically created when you create
     * your first private work team. You can create one private work force in each AWS
     * Region. By default, any workforce-related API operation used in a specific
     * region will apply to the workforce created in that region. To learn how to
     * create a private workforce, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-workforce-create-private.html">Create
     * a Private Workforce</a>.</p>
     */
    inline const Workforce& GetWorkforce() const{ return m_workforce; }

    /**
     * <p>A single private workforce, which is automatically created when you create
     * your first private work team. You can create one private work force in each AWS
     * Region. By default, any workforce-related API operation used in a specific
     * region will apply to the workforce created in that region. To learn how to
     * create a private workforce, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-workforce-create-private.html">Create
     * a Private Workforce</a>.</p>
     */
    inline void SetWorkforce(const Workforce& value) { m_workforce = value; }

    /**
     * <p>A single private workforce, which is automatically created when you create
     * your first private work team. You can create one private work force in each AWS
     * Region. By default, any workforce-related API operation used in a specific
     * region will apply to the workforce created in that region. To learn how to
     * create a private workforce, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-workforce-create-private.html">Create
     * a Private Workforce</a>.</p>
     */
    inline void SetWorkforce(Workforce&& value) { m_workforce = std::move(value); }

    /**
     * <p>A single private workforce, which is automatically created when you create
     * your first private work team. You can create one private work force in each AWS
     * Region. By default, any workforce-related API operation used in a specific
     * region will apply to the workforce created in that region. To learn how to
     * create a private workforce, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-workforce-create-private.html">Create
     * a Private Workforce</a>.</p>
     */
    inline UpdateWorkforceResult& WithWorkforce(const Workforce& value) { SetWorkforce(value); return *this;}

    /**
     * <p>A single private workforce, which is automatically created when you create
     * your first private work team. You can create one private work force in each AWS
     * Region. By default, any workforce-related API operation used in a specific
     * region will apply to the workforce created in that region. To learn how to
     * create a private workforce, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-workforce-create-private.html">Create
     * a Private Workforce</a>.</p>
     */
    inline UpdateWorkforceResult& WithWorkforce(Workforce&& value) { SetWorkforce(std::move(value)); return *this;}

  private:

    Workforce m_workforce;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
