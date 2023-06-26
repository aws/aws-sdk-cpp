/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/acm/model/ExtendedKeyUsageName.h>
#include <aws/acm/model/KeyUsageName.h>
#include <aws/acm/model/KeyAlgorithm.h>
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
namespace ACM
{
namespace Model
{

  /**
   * <p>This structure can be used in the <a>ListCertificates</a> action to filter
   * the output of the certificate list. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/acm-2015-12-08/Filters">AWS API
   * Reference</a></p>
   */
  class Filters
  {
  public:
    AWS_ACM_API Filters();
    AWS_ACM_API Filters(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACM_API Filters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specify one or more <a>ExtendedKeyUsage</a> extension values.</p>
     */
    inline const Aws::Vector<ExtendedKeyUsageName>& GetExtendedKeyUsage() const{ return m_extendedKeyUsage; }

    /**
     * <p>Specify one or more <a>ExtendedKeyUsage</a> extension values.</p>
     */
    inline bool ExtendedKeyUsageHasBeenSet() const { return m_extendedKeyUsageHasBeenSet; }

    /**
     * <p>Specify one or more <a>ExtendedKeyUsage</a> extension values.</p>
     */
    inline void SetExtendedKeyUsage(const Aws::Vector<ExtendedKeyUsageName>& value) { m_extendedKeyUsageHasBeenSet = true; m_extendedKeyUsage = value; }

    /**
     * <p>Specify one or more <a>ExtendedKeyUsage</a> extension values.</p>
     */
    inline void SetExtendedKeyUsage(Aws::Vector<ExtendedKeyUsageName>&& value) { m_extendedKeyUsageHasBeenSet = true; m_extendedKeyUsage = std::move(value); }

    /**
     * <p>Specify one or more <a>ExtendedKeyUsage</a> extension values.</p>
     */
    inline Filters& WithExtendedKeyUsage(const Aws::Vector<ExtendedKeyUsageName>& value) { SetExtendedKeyUsage(value); return *this;}

    /**
     * <p>Specify one or more <a>ExtendedKeyUsage</a> extension values.</p>
     */
    inline Filters& WithExtendedKeyUsage(Aws::Vector<ExtendedKeyUsageName>&& value) { SetExtendedKeyUsage(std::move(value)); return *this;}

    /**
     * <p>Specify one or more <a>ExtendedKeyUsage</a> extension values.</p>
     */
    inline Filters& AddExtendedKeyUsage(const ExtendedKeyUsageName& value) { m_extendedKeyUsageHasBeenSet = true; m_extendedKeyUsage.push_back(value); return *this; }

    /**
     * <p>Specify one or more <a>ExtendedKeyUsage</a> extension values.</p>
     */
    inline Filters& AddExtendedKeyUsage(ExtendedKeyUsageName&& value) { m_extendedKeyUsageHasBeenSet = true; m_extendedKeyUsage.push_back(std::move(value)); return *this; }


    /**
     * <p>Specify one or more <a>KeyUsage</a> extension values.</p>
     */
    inline const Aws::Vector<KeyUsageName>& GetKeyUsage() const{ return m_keyUsage; }

    /**
     * <p>Specify one or more <a>KeyUsage</a> extension values.</p>
     */
    inline bool KeyUsageHasBeenSet() const { return m_keyUsageHasBeenSet; }

    /**
     * <p>Specify one or more <a>KeyUsage</a> extension values.</p>
     */
    inline void SetKeyUsage(const Aws::Vector<KeyUsageName>& value) { m_keyUsageHasBeenSet = true; m_keyUsage = value; }

    /**
     * <p>Specify one or more <a>KeyUsage</a> extension values.</p>
     */
    inline void SetKeyUsage(Aws::Vector<KeyUsageName>&& value) { m_keyUsageHasBeenSet = true; m_keyUsage = std::move(value); }

    /**
     * <p>Specify one or more <a>KeyUsage</a> extension values.</p>
     */
    inline Filters& WithKeyUsage(const Aws::Vector<KeyUsageName>& value) { SetKeyUsage(value); return *this;}

    /**
     * <p>Specify one or more <a>KeyUsage</a> extension values.</p>
     */
    inline Filters& WithKeyUsage(Aws::Vector<KeyUsageName>&& value) { SetKeyUsage(std::move(value)); return *this;}

    /**
     * <p>Specify one or more <a>KeyUsage</a> extension values.</p>
     */
    inline Filters& AddKeyUsage(const KeyUsageName& value) { m_keyUsageHasBeenSet = true; m_keyUsage.push_back(value); return *this; }

    /**
     * <p>Specify one or more <a>KeyUsage</a> extension values.</p>
     */
    inline Filters& AddKeyUsage(KeyUsageName&& value) { m_keyUsageHasBeenSet = true; m_keyUsage.push_back(std::move(value)); return *this; }


    /**
     * <p>Specify one or more algorithms that can be used to generate key pairs.</p>
     * <p>Default filtering returns only <code>RSA_1024</code> and
     * <code>RSA_2048</code> certificates that have at least one domain. To return
     * other certificate types, provide the desired type signatures in a
     * comma-separated list. For example, <code>"keyTypes":
     * ["RSA_2048","RSA_4096"]</code> returns both <code>RSA_2048</code> and
     * <code>RSA_4096</code> certificates.</p>
     */
    inline const Aws::Vector<KeyAlgorithm>& GetKeyTypes() const{ return m_keyTypes; }

    /**
     * <p>Specify one or more algorithms that can be used to generate key pairs.</p>
     * <p>Default filtering returns only <code>RSA_1024</code> and
     * <code>RSA_2048</code> certificates that have at least one domain. To return
     * other certificate types, provide the desired type signatures in a
     * comma-separated list. For example, <code>"keyTypes":
     * ["RSA_2048","RSA_4096"]</code> returns both <code>RSA_2048</code> and
     * <code>RSA_4096</code> certificates.</p>
     */
    inline bool KeyTypesHasBeenSet() const { return m_keyTypesHasBeenSet; }

    /**
     * <p>Specify one or more algorithms that can be used to generate key pairs.</p>
     * <p>Default filtering returns only <code>RSA_1024</code> and
     * <code>RSA_2048</code> certificates that have at least one domain. To return
     * other certificate types, provide the desired type signatures in a
     * comma-separated list. For example, <code>"keyTypes":
     * ["RSA_2048","RSA_4096"]</code> returns both <code>RSA_2048</code> and
     * <code>RSA_4096</code> certificates.</p>
     */
    inline void SetKeyTypes(const Aws::Vector<KeyAlgorithm>& value) { m_keyTypesHasBeenSet = true; m_keyTypes = value; }

    /**
     * <p>Specify one or more algorithms that can be used to generate key pairs.</p>
     * <p>Default filtering returns only <code>RSA_1024</code> and
     * <code>RSA_2048</code> certificates that have at least one domain. To return
     * other certificate types, provide the desired type signatures in a
     * comma-separated list. For example, <code>"keyTypes":
     * ["RSA_2048","RSA_4096"]</code> returns both <code>RSA_2048</code> and
     * <code>RSA_4096</code> certificates.</p>
     */
    inline void SetKeyTypes(Aws::Vector<KeyAlgorithm>&& value) { m_keyTypesHasBeenSet = true; m_keyTypes = std::move(value); }

    /**
     * <p>Specify one or more algorithms that can be used to generate key pairs.</p>
     * <p>Default filtering returns only <code>RSA_1024</code> and
     * <code>RSA_2048</code> certificates that have at least one domain. To return
     * other certificate types, provide the desired type signatures in a
     * comma-separated list. For example, <code>"keyTypes":
     * ["RSA_2048","RSA_4096"]</code> returns both <code>RSA_2048</code> and
     * <code>RSA_4096</code> certificates.</p>
     */
    inline Filters& WithKeyTypes(const Aws::Vector<KeyAlgorithm>& value) { SetKeyTypes(value); return *this;}

    /**
     * <p>Specify one or more algorithms that can be used to generate key pairs.</p>
     * <p>Default filtering returns only <code>RSA_1024</code> and
     * <code>RSA_2048</code> certificates that have at least one domain. To return
     * other certificate types, provide the desired type signatures in a
     * comma-separated list. For example, <code>"keyTypes":
     * ["RSA_2048","RSA_4096"]</code> returns both <code>RSA_2048</code> and
     * <code>RSA_4096</code> certificates.</p>
     */
    inline Filters& WithKeyTypes(Aws::Vector<KeyAlgorithm>&& value) { SetKeyTypes(std::move(value)); return *this;}

    /**
     * <p>Specify one or more algorithms that can be used to generate key pairs.</p>
     * <p>Default filtering returns only <code>RSA_1024</code> and
     * <code>RSA_2048</code> certificates that have at least one domain. To return
     * other certificate types, provide the desired type signatures in a
     * comma-separated list. For example, <code>"keyTypes":
     * ["RSA_2048","RSA_4096"]</code> returns both <code>RSA_2048</code> and
     * <code>RSA_4096</code> certificates.</p>
     */
    inline Filters& AddKeyTypes(const KeyAlgorithm& value) { m_keyTypesHasBeenSet = true; m_keyTypes.push_back(value); return *this; }

    /**
     * <p>Specify one or more algorithms that can be used to generate key pairs.</p>
     * <p>Default filtering returns only <code>RSA_1024</code> and
     * <code>RSA_2048</code> certificates that have at least one domain. To return
     * other certificate types, provide the desired type signatures in a
     * comma-separated list. For example, <code>"keyTypes":
     * ["RSA_2048","RSA_4096"]</code> returns both <code>RSA_2048</code> and
     * <code>RSA_4096</code> certificates.</p>
     */
    inline Filters& AddKeyTypes(KeyAlgorithm&& value) { m_keyTypesHasBeenSet = true; m_keyTypes.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<ExtendedKeyUsageName> m_extendedKeyUsage;
    bool m_extendedKeyUsageHasBeenSet = false;

    Aws::Vector<KeyUsageName> m_keyUsage;
    bool m_keyUsageHasBeenSet = false;

    Aws::Vector<KeyAlgorithm> m_keyTypes;
    bool m_keyTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace ACM
} // namespace Aws
