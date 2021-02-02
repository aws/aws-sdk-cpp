/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/model/VirtualGatewayListenerTlsFileCertificate.h>
#include <aws/appmesh/model/VirtualGatewayListenerTlsSdsCertificate.h>
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
   * <p>An object that represents the virtual gateway's client's Transport Layer
   * Security (TLS) certificate.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/VirtualGatewayClientTlsCertificate">AWS
   * API Reference</a></p>
   */
  class AWS_APPMESH_API VirtualGatewayClientTlsCertificate
  {
  public:
    VirtualGatewayClientTlsCertificate();
    VirtualGatewayClientTlsCertificate(Aws::Utils::Json::JsonView jsonValue);
    VirtualGatewayClientTlsCertificate& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const VirtualGatewayListenerTlsFileCertificate& GetFile() const{ return m_file; }

    
    inline bool FileHasBeenSet() const { return m_fileHasBeenSet; }

    
    inline void SetFile(const VirtualGatewayListenerTlsFileCertificate& value) { m_fileHasBeenSet = true; m_file = value; }

    
    inline void SetFile(VirtualGatewayListenerTlsFileCertificate&& value) { m_fileHasBeenSet = true; m_file = std::move(value); }

    
    inline VirtualGatewayClientTlsCertificate& WithFile(const VirtualGatewayListenerTlsFileCertificate& value) { SetFile(value); return *this;}

    
    inline VirtualGatewayClientTlsCertificate& WithFile(VirtualGatewayListenerTlsFileCertificate&& value) { SetFile(std::move(value)); return *this;}


    /**
     * <p>A reference to an object that represents a virtual gateway's client's Secret
     * Discovery Service certificate.</p>
     */
    inline const VirtualGatewayListenerTlsSdsCertificate& GetSds() const{ return m_sds; }

    /**
     * <p>A reference to an object that represents a virtual gateway's client's Secret
     * Discovery Service certificate.</p>
     */
    inline bool SdsHasBeenSet() const { return m_sdsHasBeenSet; }

    /**
     * <p>A reference to an object that represents a virtual gateway's client's Secret
     * Discovery Service certificate.</p>
     */
    inline void SetSds(const VirtualGatewayListenerTlsSdsCertificate& value) { m_sdsHasBeenSet = true; m_sds = value; }

    /**
     * <p>A reference to an object that represents a virtual gateway's client's Secret
     * Discovery Service certificate.</p>
     */
    inline void SetSds(VirtualGatewayListenerTlsSdsCertificate&& value) { m_sdsHasBeenSet = true; m_sds = std::move(value); }

    /**
     * <p>A reference to an object that represents a virtual gateway's client's Secret
     * Discovery Service certificate.</p>
     */
    inline VirtualGatewayClientTlsCertificate& WithSds(const VirtualGatewayListenerTlsSdsCertificate& value) { SetSds(value); return *this;}

    /**
     * <p>A reference to an object that represents a virtual gateway's client's Secret
     * Discovery Service certificate.</p>
     */
    inline VirtualGatewayClientTlsCertificate& WithSds(VirtualGatewayListenerTlsSdsCertificate&& value) { SetSds(std::move(value)); return *this;}

  private:

    VirtualGatewayListenerTlsFileCertificate m_file;
    bool m_fileHasBeenSet;

    VirtualGatewayListenerTlsSdsCertificate m_sds;
    bool m_sdsHasBeenSet;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
