/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
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
namespace IoTTwinMaker
{
namespace Model
{
  class UpdateWorkspaceResult
  {
  public:
    AWS_IOTTWINMAKER_API UpdateWorkspaceResult();
    AWS_IOTTWINMAKER_API UpdateWorkspaceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTTWINMAKER_API UpdateWorkspaceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The date and time of the current update.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateDateTime() const{ return m_updateDateTime; }

    /**
     * <p>The date and time of the current update.</p>
     */
    inline void SetUpdateDateTime(const Aws::Utils::DateTime& value) { m_updateDateTime = value; }

    /**
     * <p>The date and time of the current update.</p>
     */
    inline void SetUpdateDateTime(Aws::Utils::DateTime&& value) { m_updateDateTime = std::move(value); }

    /**
     * <p>The date and time of the current update.</p>
     */
    inline UpdateWorkspaceResult& WithUpdateDateTime(const Aws::Utils::DateTime& value) { SetUpdateDateTime(value); return *this;}

    /**
     * <p>The date and time of the current update.</p>
     */
    inline UpdateWorkspaceResult& WithUpdateDateTime(Aws::Utils::DateTime&& value) { SetUpdateDateTime(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_updateDateTime;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
