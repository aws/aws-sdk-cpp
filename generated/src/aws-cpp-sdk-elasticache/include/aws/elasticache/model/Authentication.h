/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/elasticache/model/AuthenticationType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace ElastiCache
{
namespace Model
{

  /**
   * <p>Indicates whether the user requires a password to authenticate.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/Authentication">AWS
   * API Reference</a></p>
   */
  class Authentication
  {
  public:
    AWS_ELASTICACHE_API Authentication() = default;
    AWS_ELASTICACHE_API Authentication(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICACHE_API Authentication& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Indicates whether the user requires a password to authenticate.</p>
     */
    inline AuthenticationType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(AuthenticationType value) { m_typeHasBeenSet = true; m_type = value; }
    inline Authentication& WithType(AuthenticationType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of passwords belonging to the user. The maximum is two.</p>
     */
    inline int GetPasswordCount() const { return m_passwordCount; }
    inline bool PasswordCountHasBeenSet() const { return m_passwordCountHasBeenSet; }
    inline void SetPasswordCount(int value) { m_passwordCountHasBeenSet = true; m_passwordCount = value; }
    inline Authentication& WithPasswordCount(int value) { SetPasswordCount(value); return *this;}
    ///@}
  private:

    AuthenticationType m_type{AuthenticationType::NOT_SET};
    bool m_typeHasBeenSet = false;

    int m_passwordCount{0};
    bool m_passwordCountHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
