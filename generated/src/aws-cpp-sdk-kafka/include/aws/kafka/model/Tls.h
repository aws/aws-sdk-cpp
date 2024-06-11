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
  class Tls
  {
  public:
    AWS_KAFKA_API Tls();
    AWS_KAFKA_API Tls(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API Tls& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * 
            <p>List of ACM Certificate Authority ARNs.</p>
         
     */
    inline const Aws::Vector<Aws::String>& GetCertificateAuthorityArnList() const{ return m_certificateAuthorityArnList; }
    inline bool CertificateAuthorityArnListHasBeenSet() const { return m_certificateAuthorityArnListHasBeenSet; }
    inline void SetCertificateAuthorityArnList(const Aws::Vector<Aws::String>& value) { m_certificateAuthorityArnListHasBeenSet = true; m_certificateAuthorityArnList = value; }
    inline void SetCertificateAuthorityArnList(Aws::Vector<Aws::String>&& value) { m_certificateAuthorityArnListHasBeenSet = true; m_certificateAuthorityArnList = std::move(value); }
    inline Tls& WithCertificateAuthorityArnList(const Aws::Vector<Aws::String>& value) { SetCertificateAuthorityArnList(value); return *this;}
    inline Tls& WithCertificateAuthorityArnList(Aws::Vector<Aws::String>&& value) { SetCertificateAuthorityArnList(std::move(value)); return *this;}
    inline Tls& AddCertificateAuthorityArnList(const Aws::String& value) { m_certificateAuthorityArnListHasBeenSet = true; m_certificateAuthorityArnList.push_back(value); return *this; }
    inline Tls& AddCertificateAuthorityArnList(Aws::String&& value) { m_certificateAuthorityArnListHasBeenSet = true; m_certificateAuthorityArnList.push_back(std::move(value)); return *this; }
    inline Tls& AddCertificateAuthorityArnList(const char* value) { m_certificateAuthorityArnListHasBeenSet = true; m_certificateAuthorityArnList.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * 
            <p>Specifies whether you want to turn on or turn off TLS
     * authentication.</p>
         
     */
    inline bool GetEnabled() const{ return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline Tls& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_certificateAuthorityArnList;
    bool m_certificateAuthorityArnListHasBeenSet = false;

    bool m_enabled;
    bool m_enabledHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
