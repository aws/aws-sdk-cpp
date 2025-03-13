/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/model/LoggingFormat.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace AppMesh
{
namespace Model
{

  /**
   * <p>An object that represents an access log file.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/VirtualGatewayFileAccessLog">AWS
   * API Reference</a></p>
   */
  class VirtualGatewayFileAccessLog
  {
  public:
    AWS_APPMESH_API VirtualGatewayFileAccessLog() = default;
    AWS_APPMESH_API VirtualGatewayFileAccessLog(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API VirtualGatewayFileAccessLog& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The specified format for the virtual gateway access logs. It can be either
     * <code>json_format</code> or <code>text_format</code>.</p>
     */
    inline const LoggingFormat& GetFormat() const { return m_format; }
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
    template<typename FormatT = LoggingFormat>
    void SetFormat(FormatT&& value) { m_formatHasBeenSet = true; m_format = std::forward<FormatT>(value); }
    template<typename FormatT = LoggingFormat>
    VirtualGatewayFileAccessLog& WithFormat(FormatT&& value) { SetFormat(std::forward<FormatT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The file path to write access logs to. You can use <code>/dev/stdout</code>
     * to send access logs to standard out and configure your Envoy container to use a
     * log driver, such as <code>awslogs</code>, to export the access logs to a log
     * storage service such as Amazon CloudWatch Logs. You can also specify a path in
     * the Envoy container's file system to write the files to disk.</p>
     */
    inline const Aws::String& GetPath() const { return m_path; }
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }
    template<typename PathT = Aws::String>
    void SetPath(PathT&& value) { m_pathHasBeenSet = true; m_path = std::forward<PathT>(value); }
    template<typename PathT = Aws::String>
    VirtualGatewayFileAccessLog& WithPath(PathT&& value) { SetPath(std::forward<PathT>(value)); return *this;}
    ///@}
  private:

    LoggingFormat m_format;
    bool m_formatHasBeenSet = false;

    Aws::String m_path;
    bool m_pathHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
