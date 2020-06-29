/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Kafka
{
namespace Model
{

  /**
   * 
            <p>Details for client authentication using TLS.</p>
        
   * <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/Tls">AWS API
   * Reference</a></p>
   */
  class AWS_KAFKA_API Tls
  {
  public:
    Tls();
    Tls(Aws::Utils::Json::JsonView jsonValue);
    Tls& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * 
            <p>List of ACM Certificate Authority ARNs.</p>
         
     */
    inline const Aws::Vector<Aws::String>& GetCertificateAuthorityArnList() const{ return m_certificateAuthorityArnList; }

    /**
     * 
            <p>List of ACM Certificate Authority ARNs.</p>
         
     */
    inline bool CertificateAuthorityArnListHasBeenSet() const { return m_certificateAuthorityArnListHasBeenSet; }

    /**
     * 
            <p>List of ACM Certificate Authority ARNs.</p>
         
     */
    inline void SetCertificateAuthorityArnList(const Aws::Vector<Aws::String>& value) { m_certificateAuthorityArnListHasBeenSet = true; m_certificateAuthorityArnList = value; }

    /**
     * 
            <p>List of ACM Certificate Authority ARNs.</p>
         
     */
    inline void SetCertificateAuthorityArnList(Aws::Vector<Aws::String>&& value) { m_certificateAuthorityArnListHasBeenSet = true; m_certificateAuthorityArnList = std::move(value); }

    /**
     * 
            <p>List of ACM Certificate Authority ARNs.</p>
         
     */
    inline Tls& WithCertificateAuthorityArnList(const Aws::Vector<Aws::String>& value) { SetCertificateAuthorityArnList(value); return *this;}

    /**
     * 
            <p>List of ACM Certificate Authority ARNs.</p>
         
     */
    inline Tls& WithCertificateAuthorityArnList(Aws::Vector<Aws::String>&& value) { SetCertificateAuthorityArnList(std::move(value)); return *this;}

    /**
     * 
            <p>List of ACM Certificate Authority ARNs.</p>
         
     */
    inline Tls& AddCertificateAuthorityArnList(const Aws::String& value) { m_certificateAuthorityArnListHasBeenSet = true; m_certificateAuthorityArnList.push_back(value); return *this; }

    /**
     * 
            <p>List of ACM Certificate Authority ARNs.</p>
         
     */
    inline Tls& AddCertificateAuthorityArnList(Aws::String&& value) { m_certificateAuthorityArnListHasBeenSet = true; m_certificateAuthorityArnList.push_back(std::move(value)); return *this; }

    /**
     * 
            <p>List of ACM Certificate Authority ARNs.</p>
         
     */
    inline Tls& AddCertificateAuthorityArnList(const char* value) { m_certificateAuthorityArnListHasBeenSet = true; m_certificateAuthorityArnList.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_certificateAuthorityArnList;
    bool m_certificateAuthorityArnListHasBeenSet;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
