﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{
  class AWS_EC2_API GetConsoleOutputResponse
  {
  public:
    GetConsoleOutputResponse();
    GetConsoleOutputResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    GetConsoleOutputResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The ID of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The ID of the instance.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceId = value; }

    /**
     * <p>The ID of the instance.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceId = std::move(value); }

    /**
     * <p>The ID of the instance.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceId.assign(value); }

    /**
     * <p>The ID of the instance.</p>
     */
    inline GetConsoleOutputResponse& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The ID of the instance.</p>
     */
    inline GetConsoleOutputResponse& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the instance.</p>
     */
    inline GetConsoleOutputResponse& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>The console output, base64-encoded. If you are using a command line tool, the
     * tool decodes the output for you.</p>
     */
    inline const Aws::String& GetOutput() const{ return m_output; }

    /**
     * <p>The console output, base64-encoded. If you are using a command line tool, the
     * tool decodes the output for you.</p>
     */
    inline void SetOutput(const Aws::String& value) { m_output = value; }

    /**
     * <p>The console output, base64-encoded. If you are using a command line tool, the
     * tool decodes the output for you.</p>
     */
    inline void SetOutput(Aws::String&& value) { m_output = std::move(value); }

    /**
     * <p>The console output, base64-encoded. If you are using a command line tool, the
     * tool decodes the output for you.</p>
     */
    inline void SetOutput(const char* value) { m_output.assign(value); }

    /**
     * <p>The console output, base64-encoded. If you are using a command line tool, the
     * tool decodes the output for you.</p>
     */
    inline GetConsoleOutputResponse& WithOutput(const Aws::String& value) { SetOutput(value); return *this;}

    /**
     * <p>The console output, base64-encoded. If you are using a command line tool, the
     * tool decodes the output for you.</p>
     */
    inline GetConsoleOutputResponse& WithOutput(Aws::String&& value) { SetOutput(std::move(value)); return *this;}

    /**
     * <p>The console output, base64-encoded. If you are using a command line tool, the
     * tool decodes the output for you.</p>
     */
    inline GetConsoleOutputResponse& WithOutput(const char* value) { SetOutput(value); return *this;}


    /**
     * <p>The time at which the output was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const{ return m_timestamp; }

    /**
     * <p>The time at which the output was last updated.</p>
     */
    inline void SetTimestamp(const Aws::Utils::DateTime& value) { m_timestamp = value; }

    /**
     * <p>The time at which the output was last updated.</p>
     */
    inline void SetTimestamp(Aws::Utils::DateTime&& value) { m_timestamp = std::move(value); }

    /**
     * <p>The time at which the output was last updated.</p>
     */
    inline GetConsoleOutputResponse& WithTimestamp(const Aws::Utils::DateTime& value) { SetTimestamp(value); return *this;}

    /**
     * <p>The time at which the output was last updated.</p>
     */
    inline GetConsoleOutputResponse& WithTimestamp(Aws::Utils::DateTime&& value) { SetTimestamp(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline GetConsoleOutputResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline GetConsoleOutputResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_instanceId;

    Aws::String m_output;

    Aws::Utils::DateTime m_timestamp;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
