/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
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
namespace IoTFleetWise
{
namespace Model
{
  class UpdateFleetResult
  {
  public:
    AWS_IOTFLEETWISE_API UpdateFleetResult();
    AWS_IOTFLEETWISE_API UpdateFleetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTFLEETWISE_API UpdateFleetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the updated fleet.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the updated fleet.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The ID of the updated fleet.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>The ID of the updated fleet.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The ID of the updated fleet.</p>
     */
    inline UpdateFleetResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the updated fleet.</p>
     */
    inline UpdateFleetResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the updated fleet.</p>
     */
    inline UpdateFleetResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the updated fleet.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the updated fleet.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the updated fleet.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the updated fleet.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the updated fleet.</p>
     */
    inline UpdateFleetResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the updated fleet.</p>
     */
    inline UpdateFleetResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the updated fleet.</p>
     */
    inline UpdateFleetResult& WithArn(const char* value) { SetArn(value); return *this;}

  private:

    Aws::String m_id;

    Aws::String m_arn;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
