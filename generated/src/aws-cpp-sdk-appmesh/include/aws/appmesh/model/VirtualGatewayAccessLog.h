/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/model/VirtualGatewayFileAccessLog.h>
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
   * <p>The access log configuration for a virtual gateway.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/VirtualGatewayAccessLog">AWS
   * API Reference</a></p>
   */
  class VirtualGatewayAccessLog
  {
  public:
    AWS_APPMESH_API VirtualGatewayAccessLog();
    AWS_APPMESH_API VirtualGatewayAccessLog(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API VirtualGatewayAccessLog& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The file object to send virtual gateway access logs to.</p>
     */
    inline const VirtualGatewayFileAccessLog& GetFile() const{ return m_file; }

    /**
     * <p>The file object to send virtual gateway access logs to.</p>
     */
    inline bool FileHasBeenSet() const { return m_fileHasBeenSet; }

    /**
     * <p>The file object to send virtual gateway access logs to.</p>
     */
    inline void SetFile(const VirtualGatewayFileAccessLog& value) { m_fileHasBeenSet = true; m_file = value; }

    /**
     * <p>The file object to send virtual gateway access logs to.</p>
     */
    inline void SetFile(VirtualGatewayFileAccessLog&& value) { m_fileHasBeenSet = true; m_file = std::move(value); }

    /**
     * <p>The file object to send virtual gateway access logs to.</p>
     */
    inline VirtualGatewayAccessLog& WithFile(const VirtualGatewayFileAccessLog& value) { SetFile(value); return *this;}

    /**
     * <p>The file object to send virtual gateway access logs to.</p>
     */
    inline VirtualGatewayAccessLog& WithFile(VirtualGatewayFileAccessLog&& value) { SetFile(std::move(value)); return *this;}

  private:

    VirtualGatewayFileAccessLog m_file;
    bool m_fileHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
