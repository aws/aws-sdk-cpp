/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
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
namespace Connect
{
namespace Model
{
  class CreateHoursOfOperationResult
  {
  public:
    AWS_CONNECT_API CreateHoursOfOperationResult();
    AWS_CONNECT_API CreateHoursOfOperationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API CreateHoursOfOperationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identifier for the hours of operation.</p>
     */
    inline const Aws::String& GetHoursOfOperationId() const{ return m_hoursOfOperationId; }

    /**
     * <p>The identifier for the hours of operation.</p>
     */
    inline void SetHoursOfOperationId(const Aws::String& value) { m_hoursOfOperationId = value; }

    /**
     * <p>The identifier for the hours of operation.</p>
     */
    inline void SetHoursOfOperationId(Aws::String&& value) { m_hoursOfOperationId = std::move(value); }

    /**
     * <p>The identifier for the hours of operation.</p>
     */
    inline void SetHoursOfOperationId(const char* value) { m_hoursOfOperationId.assign(value); }

    /**
     * <p>The identifier for the hours of operation.</p>
     */
    inline CreateHoursOfOperationResult& WithHoursOfOperationId(const Aws::String& value) { SetHoursOfOperationId(value); return *this;}

    /**
     * <p>The identifier for the hours of operation.</p>
     */
    inline CreateHoursOfOperationResult& WithHoursOfOperationId(Aws::String&& value) { SetHoursOfOperationId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the hours of operation.</p>
     */
    inline CreateHoursOfOperationResult& WithHoursOfOperationId(const char* value) { SetHoursOfOperationId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) for the hours of operation.</p>
     */
    inline const Aws::String& GetHoursOfOperationArn() const{ return m_hoursOfOperationArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the hours of operation.</p>
     */
    inline void SetHoursOfOperationArn(const Aws::String& value) { m_hoursOfOperationArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the hours of operation.</p>
     */
    inline void SetHoursOfOperationArn(Aws::String&& value) { m_hoursOfOperationArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the hours of operation.</p>
     */
    inline void SetHoursOfOperationArn(const char* value) { m_hoursOfOperationArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the hours of operation.</p>
     */
    inline CreateHoursOfOperationResult& WithHoursOfOperationArn(const Aws::String& value) { SetHoursOfOperationArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the hours of operation.</p>
     */
    inline CreateHoursOfOperationResult& WithHoursOfOperationArn(Aws::String&& value) { SetHoursOfOperationArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the hours of operation.</p>
     */
    inline CreateHoursOfOperationResult& WithHoursOfOperationArn(const char* value) { SetHoursOfOperationArn(value); return *this;}

  private:

    Aws::String m_hoursOfOperationId;

    Aws::String m_hoursOfOperationArn;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
