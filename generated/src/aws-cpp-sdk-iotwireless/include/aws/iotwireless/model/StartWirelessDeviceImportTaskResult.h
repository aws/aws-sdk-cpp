/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
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
namespace IoTWireless
{
namespace Model
{
  class StartWirelessDeviceImportTaskResult
  {
  public:
    AWS_IOTWIRELESS_API StartWirelessDeviceImportTaskResult();
    AWS_IOTWIRELESS_API StartWirelessDeviceImportTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTWIRELESS_API StartWirelessDeviceImportTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The import task ID.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The import task ID.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The import task ID.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>The import task ID.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The import task ID.</p>
     */
    inline StartWirelessDeviceImportTaskResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The import task ID.</p>
     */
    inline StartWirelessDeviceImportTaskResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The import task ID.</p>
     */
    inline StartWirelessDeviceImportTaskResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The ARN (Amazon Resource Name) of the import task.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN (Amazon Resource Name) of the import task.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The ARN (Amazon Resource Name) of the import task.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The ARN (Amazon Resource Name) of the import task.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The ARN (Amazon Resource Name) of the import task.</p>
     */
    inline StartWirelessDeviceImportTaskResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN (Amazon Resource Name) of the import task.</p>
     */
    inline StartWirelessDeviceImportTaskResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN (Amazon Resource Name) of the import task.</p>
     */
    inline StartWirelessDeviceImportTaskResult& WithArn(const char* value) { SetArn(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline StartWirelessDeviceImportTaskResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline StartWirelessDeviceImportTaskResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline StartWirelessDeviceImportTaskResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_id;

    Aws::String m_arn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
