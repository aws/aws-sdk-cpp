/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class AWS_WORKLINK_API CreateFleetResult
  {
  public:
    CreateFleetResult();
    CreateFleetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateFleetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the fleet.</p>
     */
    inline const Aws::String& GetFleetArn() const{ return m_fleetArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the fleet.</p>
     */
    inline void SetFleetArn(const Aws::String& value) { m_fleetArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the fleet.</p>
     */
    inline void SetFleetArn(Aws::String&& value) { m_fleetArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the fleet.</p>
     */
    inline void SetFleetArn(const char* value) { m_fleetArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the fleet.</p>
     */
    inline CreateFleetResult& WithFleetArn(const Aws::String& value) { SetFleetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the fleet.</p>
     */
    inline CreateFleetResult& WithFleetArn(Aws::String&& value) { SetFleetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the fleet.</p>
     */
    inline CreateFleetResult& WithFleetArn(const char* value) { SetFleetArn(value); return *this;}

  private:

    Aws::String m_fleetArn;
  };

} // namespace Model
} // namespace WorkLink
} // namespace Aws
