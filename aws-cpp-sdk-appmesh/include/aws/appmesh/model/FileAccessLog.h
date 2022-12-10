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
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/FileAccessLog">AWS
   * API Reference</a></p>
   */
  class FileAccessLog
  {
  public:
    AWS_APPMESH_API FileAccessLog();
    AWS_APPMESH_API FileAccessLog(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API FileAccessLog& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The specified format for the logs. The format is either
     * <code>json_format</code> or <code>text_format</code>.</p>
     */
    inline const LoggingFormat& GetFormat() const{ return m_format; }

    /**
     * <p>The specified format for the logs. The format is either
     * <code>json_format</code> or <code>text_format</code>.</p>
     */
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }

    /**
     * <p>The specified format for the logs. The format is either
     * <code>json_format</code> or <code>text_format</code>.</p>
     */
    inline void SetFormat(const LoggingFormat& value) { m_formatHasBeenSet = true; m_format = value; }

    /**
     * <p>The specified format for the logs. The format is either
     * <code>json_format</code> or <code>text_format</code>.</p>
     */
    inline void SetFormat(LoggingFormat&& value) { m_formatHasBeenSet = true; m_format = std::move(value); }

    /**
     * <p>The specified format for the logs. The format is either
     * <code>json_format</code> or <code>text_format</code>.</p>
     */
    inline FileAccessLog& WithFormat(const LoggingFormat& value) { SetFormat(value); return *this;}

    /**
     * <p>The specified format for the logs. The format is either
     * <code>json_format</code> or <code>text_format</code>.</p>
     */
    inline FileAccessLog& WithFormat(LoggingFormat&& value) { SetFormat(std::move(value)); return *this;}


    /**
     * <p>The file path to write access logs to. You can use <code>/dev/stdout</code>
     * to send access logs to standard out and configure your Envoy container to use a
     * log driver, such as <code>awslogs</code>, to export the access logs to a log
     * storage service such as Amazon CloudWatch Logs. You can also specify a path in
     * the Envoy container's file system to write the files to disk.</p> <pre><code>
     * &lt;note&gt; &lt;p&gt;The Envoy process must have write permissions to the path
     * that you specify here. Otherwise, Envoy fails to bootstrap properly.&lt;/p&gt;
     * &lt;/note&gt; </code></pre>
     */
    inline const Aws::String& GetPath() const{ return m_path; }

    /**
     * <p>The file path to write access logs to. You can use <code>/dev/stdout</code>
     * to send access logs to standard out and configure your Envoy container to use a
     * log driver, such as <code>awslogs</code>, to export the access logs to a log
     * storage service such as Amazon CloudWatch Logs. You can also specify a path in
     * the Envoy container's file system to write the files to disk.</p> <pre><code>
     * &lt;note&gt; &lt;p&gt;The Envoy process must have write permissions to the path
     * that you specify here. Otherwise, Envoy fails to bootstrap properly.&lt;/p&gt;
     * &lt;/note&gt; </code></pre>
     */
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }

    /**
     * <p>The file path to write access logs to. You can use <code>/dev/stdout</code>
     * to send access logs to standard out and configure your Envoy container to use a
     * log driver, such as <code>awslogs</code>, to export the access logs to a log
     * storage service such as Amazon CloudWatch Logs. You can also specify a path in
     * the Envoy container's file system to write the files to disk.</p> <pre><code>
     * &lt;note&gt; &lt;p&gt;The Envoy process must have write permissions to the path
     * that you specify here. Otherwise, Envoy fails to bootstrap properly.&lt;/p&gt;
     * &lt;/note&gt; </code></pre>
     */
    inline void SetPath(const Aws::String& value) { m_pathHasBeenSet = true; m_path = value; }

    /**
     * <p>The file path to write access logs to. You can use <code>/dev/stdout</code>
     * to send access logs to standard out and configure your Envoy container to use a
     * log driver, such as <code>awslogs</code>, to export the access logs to a log
     * storage service such as Amazon CloudWatch Logs. You can also specify a path in
     * the Envoy container's file system to write the files to disk.</p> <pre><code>
     * &lt;note&gt; &lt;p&gt;The Envoy process must have write permissions to the path
     * that you specify here. Otherwise, Envoy fails to bootstrap properly.&lt;/p&gt;
     * &lt;/note&gt; </code></pre>
     */
    inline void SetPath(Aws::String&& value) { m_pathHasBeenSet = true; m_path = std::move(value); }

    /**
     * <p>The file path to write access logs to. You can use <code>/dev/stdout</code>
     * to send access logs to standard out and configure your Envoy container to use a
     * log driver, such as <code>awslogs</code>, to export the access logs to a log
     * storage service such as Amazon CloudWatch Logs. You can also specify a path in
     * the Envoy container's file system to write the files to disk.</p> <pre><code>
     * &lt;note&gt; &lt;p&gt;The Envoy process must have write permissions to the path
     * that you specify here. Otherwise, Envoy fails to bootstrap properly.&lt;/p&gt;
     * &lt;/note&gt; </code></pre>
     */
    inline void SetPath(const char* value) { m_pathHasBeenSet = true; m_path.assign(value); }

    /**
     * <p>The file path to write access logs to. You can use <code>/dev/stdout</code>
     * to send access logs to standard out and configure your Envoy container to use a
     * log driver, such as <code>awslogs</code>, to export the access logs to a log
     * storage service such as Amazon CloudWatch Logs. You can also specify a path in
     * the Envoy container's file system to write the files to disk.</p> <pre><code>
     * &lt;note&gt; &lt;p&gt;The Envoy process must have write permissions to the path
     * that you specify here. Otherwise, Envoy fails to bootstrap properly.&lt;/p&gt;
     * &lt;/note&gt; </code></pre>
     */
    inline FileAccessLog& WithPath(const Aws::String& value) { SetPath(value); return *this;}

    /**
     * <p>The file path to write access logs to. You can use <code>/dev/stdout</code>
     * to send access logs to standard out and configure your Envoy container to use a
     * log driver, such as <code>awslogs</code>, to export the access logs to a log
     * storage service such as Amazon CloudWatch Logs. You can also specify a path in
     * the Envoy container's file system to write the files to disk.</p> <pre><code>
     * &lt;note&gt; &lt;p&gt;The Envoy process must have write permissions to the path
     * that you specify here. Otherwise, Envoy fails to bootstrap properly.&lt;/p&gt;
     * &lt;/note&gt; </code></pre>
     */
    inline FileAccessLog& WithPath(Aws::String&& value) { SetPath(std::move(value)); return *this;}

    /**
     * <p>The file path to write access logs to. You can use <code>/dev/stdout</code>
     * to send access logs to standard out and configure your Envoy container to use a
     * log driver, such as <code>awslogs</code>, to export the access logs to a log
     * storage service such as Amazon CloudWatch Logs. You can also specify a path in
     * the Envoy container's file system to write the files to disk.</p> <pre><code>
     * &lt;note&gt; &lt;p&gt;The Envoy process must have write permissions to the path
     * that you specify here. Otherwise, Envoy fails to bootstrap properly.&lt;/p&gt;
     * &lt;/note&gt; </code></pre>
     */
    inline FileAccessLog& WithPath(const char* value) { SetPath(value); return *this;}

  private:

    LoggingFormat m_format;
    bool m_formatHasBeenSet = false;

    Aws::String m_path;
    bool m_pathHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
