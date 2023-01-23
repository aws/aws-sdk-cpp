/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class UpdateClusterVersionResult
  {
  public:
    AWS_EKS_API UpdateClusterVersionResult();
    AWS_EKS_API UpdateClusterVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EKS_API UpdateClusterVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
