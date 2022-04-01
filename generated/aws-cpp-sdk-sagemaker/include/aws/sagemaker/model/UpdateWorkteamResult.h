/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
