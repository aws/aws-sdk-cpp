/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/model/ListenerTlsFileCertificate.h>
#include <aws/appmesh/model/ListenerTlsSdsCertificate.h>
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
   * <p>An object that represents the client's certificate.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/ClientTlsCertificate">AWS
   * API Reference</a></p>
   */
  class AWS_APPMESH_API ClientTlsCertificate
  {
  public:
    ClientTlsCertificate();
    ClientTlsCertificate(Aws::Utils::Json::JsonView jsonValue);
    ClientTlsCertificate& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const ListenerTlsFileCertificate& GetFile() const{ return m_file; }

    
    inline bool FileHasBeenSet() const { return m_fileHasBeenSet; }

    
    inline void SetFile(const ListenerTlsFileCertificate& value) { m_fileHasBeenSet = true; m_file = value; }

    
    inline void SetFile(ListenerTlsFileCertificate&& value) { m_fileHasBeenSet = true; m_file = std::move(value); }

    
    inline ClientTlsCertificate& WithFile(const ListenerTlsFileCertificate& value) { SetFile(value); return *this;}

    
    inline ClientTlsCertificate& WithFile(ListenerTlsFileCertificate&& value) { SetFile(std::move(value)); return *this;}


    /**
     * <p>A reference to an object that represents a client's TLS Secret Discovery
     * Service certificate.</p>
     */
    inline const ListenerTlsSdsCertificate& GetSds() const{ return m_sds; }

    /**
     * <p>A reference to an object that represents a client's TLS Secret Discovery
     * Service certificate.</p>
     */
    inline bool SdsHasBeenSet() const { return m_sdsHasBeenSet; }

    /**
     * <p>A reference to an object that represents a client's TLS Secret Discovery
     * Service certificate.</p>
     */
    inline void SetSds(const ListenerTlsSdsCertificate& value) { m_sdsHasBeenSet = true; m_sds = value; }

    /**
     * <p>A reference to an object that represents a client's TLS Secret Discovery
     * Service certificate.</p>
     */
    inline void SetSds(ListenerTlsSdsCertificate&& value) { m_sdsHasBeenSet = true; m_sds = std::move(value); }

    /**
     * <p>A reference to an object that represents a client's TLS Secret Discovery
     * Service certificate.</p>
     */
    inline ClientTlsCertificate& WithSds(const ListenerTlsSdsCertificate& value) { SetSds(value); return *this;}

    /**
     * <p>A reference to an object that represents a client's TLS Secret Discovery
     * Service certificate.</p>
     */
    inline ClientTlsCertificate& WithSds(ListenerTlsSdsCertificate&& value) { SetSds(std::move(value)); return *this;}

  private:

    ListenerTlsFileCertificate m_file;
    bool m_fileHasBeenSet;

    ListenerTlsSdsCertificate m_sds;
    bool m_sdsHasBeenSet;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
