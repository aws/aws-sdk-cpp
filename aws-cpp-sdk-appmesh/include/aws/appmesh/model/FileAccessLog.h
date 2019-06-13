/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
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
   * <p>An object representing an access log file.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/FileAccessLog">AWS
   * API Reference</a></p>
   */
  class AWS_APPMESH_API FileAccessLog
  {
  public:
    FileAccessLog();
    FileAccessLog(Aws::Utils::Json::JsonView jsonValue);
    FileAccessLog& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The file path to write access logs to. You can use <code>/dev/stdout</code>
     * to send
         access logs to standard out and configure your Envoy container
     * to use a log driver, such as
            <code>awslogs</code>, to export the
     * access logs to a log storage service such as Amazon
         CloudWatch Logs.
     * You can also specify a path in the Envoy container's file system to write
      
     * the files to disk.</p>
         <note>
            <p>The Envoy process must
     * have write permissions to the path that you specify here.
            Otherwise,
     * Envoy fails to bootstrap properly.</p>
         </note>
     */
    inline const Aws::String& GetPath() const{ return m_path; }

    /**
     * <p>The file path to write access logs to. You can use <code>/dev/stdout</code>
     * to send
         access logs to standard out and configure your Envoy container
     * to use a log driver, such as
            <code>awslogs</code>, to export the
     * access logs to a log storage service such as Amazon
         CloudWatch Logs.
     * You can also specify a path in the Envoy container's file system to write
      
     * the files to disk.</p>
         <note>
            <p>The Envoy process must
     * have write permissions to the path that you specify here.
            Otherwise,
     * Envoy fails to bootstrap properly.</p>
         </note>
     */
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }

    /**
     * <p>The file path to write access logs to. You can use <code>/dev/stdout</code>
     * to send
         access logs to standard out and configure your Envoy container
     * to use a log driver, such as
            <code>awslogs</code>, to export the
     * access logs to a log storage service such as Amazon
         CloudWatch Logs.
     * You can also specify a path in the Envoy container's file system to write
      
     * the files to disk.</p>
         <note>
            <p>The Envoy process must
     * have write permissions to the path that you specify here.
            Otherwise,
     * Envoy fails to bootstrap properly.</p>
         </note>
     */
    inline void SetPath(const Aws::String& value) { m_pathHasBeenSet = true; m_path = value; }

    /**
     * <p>The file path to write access logs to. You can use <code>/dev/stdout</code>
     * to send
         access logs to standard out and configure your Envoy container
     * to use a log driver, such as
            <code>awslogs</code>, to export the
     * access logs to a log storage service such as Amazon
         CloudWatch Logs.
     * You can also specify a path in the Envoy container's file system to write
      
     * the files to disk.</p>
         <note>
            <p>The Envoy process must
     * have write permissions to the path that you specify here.
            Otherwise,
     * Envoy fails to bootstrap properly.</p>
         </note>
     */
    inline void SetPath(Aws::String&& value) { m_pathHasBeenSet = true; m_path = std::move(value); }

    /**
     * <p>The file path to write access logs to. You can use <code>/dev/stdout</code>
     * to send
         access logs to standard out and configure your Envoy container
     * to use a log driver, such as
            <code>awslogs</code>, to export the
     * access logs to a log storage service such as Amazon
         CloudWatch Logs.
     * You can also specify a path in the Envoy container's file system to write
      
     * the files to disk.</p>
         <note>
            <p>The Envoy process must
     * have write permissions to the path that you specify here.
            Otherwise,
     * Envoy fails to bootstrap properly.</p>
         </note>
     */
    inline void SetPath(const char* value) { m_pathHasBeenSet = true; m_path.assign(value); }

    /**
     * <p>The file path to write access logs to. You can use <code>/dev/stdout</code>
     * to send
         access logs to standard out and configure your Envoy container
     * to use a log driver, such as
            <code>awslogs</code>, to export the
     * access logs to a log storage service such as Amazon
         CloudWatch Logs.
     * You can also specify a path in the Envoy container's file system to write
      
     * the files to disk.</p>
         <note>
            <p>The Envoy process must
     * have write permissions to the path that you specify here.
            Otherwise,
     * Envoy fails to bootstrap properly.</p>
         </note>
     */
    inline FileAccessLog& WithPath(const Aws::String& value) { SetPath(value); return *this;}

    /**
     * <p>The file path to write access logs to. You can use <code>/dev/stdout</code>
     * to send
         access logs to standard out and configure your Envoy container
     * to use a log driver, such as
            <code>awslogs</code>, to export the
     * access logs to a log storage service such as Amazon
         CloudWatch Logs.
     * You can also specify a path in the Envoy container's file system to write
      
     * the files to disk.</p>
         <note>
            <p>The Envoy process must
     * have write permissions to the path that you specify here.
            Otherwise,
     * Envoy fails to bootstrap properly.</p>
         </note>
     */
    inline FileAccessLog& WithPath(Aws::String&& value) { SetPath(std::move(value)); return *this;}

    /**
     * <p>The file path to write access logs to. You can use <code>/dev/stdout</code>
     * to send
         access logs to standard out and configure your Envoy container
     * to use a log driver, such as
            <code>awslogs</code>, to export the
     * access logs to a log storage service such as Amazon
         CloudWatch Logs.
     * You can also specify a path in the Envoy container's file system to write
      
     * the files to disk.</p>
         <note>
            <p>The Envoy process must
     * have write permissions to the path that you specify here.
            Otherwise,
     * Envoy fails to bootstrap properly.</p>
         </note>
     */
    inline FileAccessLog& WithPath(const char* value) { SetPath(value); return *this;}

  private:

    Aws::String m_path;
    bool m_pathHasBeenSet;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
