/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/identitystore/IdentityStore_EXPORTS.h>
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
namespace IdentityStore
{
namespace Model
{

  /**
   * <p>The identifier issued to this resource by an external identity
   * provider.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/identitystore-2020-06-15/ExternalId">AWS
   * API Reference</a></p>
   */
  class ExternalId
  {
  public:
    AWS_IDENTITYSTORE_API ExternalId();
    AWS_IDENTITYSTORE_API ExternalId(Aws::Utils::Json::JsonView jsonValue);
    AWS_IDENTITYSTORE_API ExternalId& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IDENTITYSTORE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The issuer for an external identifier.</p>
     */
    inline const Aws::String& GetIssuer() const{ return m_issuer; }

    /**
     * <p>The issuer for an external identifier.</p>
     */
    inline bool IssuerHasBeenSet() const { return m_issuerHasBeenSet; }

    /**
     * <p>The issuer for an external identifier.</p>
     */
    inline void SetIssuer(const Aws::String& value) { m_issuerHasBeenSet = true; m_issuer = value; }

    /**
     * <p>The issuer for an external identifier.</p>
     */
    inline void SetIssuer(Aws::String&& value) { m_issuerHasBeenSet = true; m_issuer = std::move(value); }

    /**
     * <p>The issuer for an external identifier.</p>
     */
    inline void SetIssuer(const char* value) { m_issuerHasBeenSet = true; m_issuer.assign(value); }

    /**
     * <p>The issuer for an external identifier.</p>
     */
    inline ExternalId& WithIssuer(const Aws::String& value) { SetIssuer(value); return *this;}

    /**
     * <p>The issuer for an external identifier.</p>
     */
    inline ExternalId& WithIssuer(Aws::String&& value) { SetIssuer(std::move(value)); return *this;}

    /**
     * <p>The issuer for an external identifier.</p>
     */
    inline ExternalId& WithIssuer(const char* value) { SetIssuer(value); return *this;}


    /**
     * <p>The identifier issued to this resource by an external identity provider.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier issued to this resource by an external identity provider.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The identifier issued to this resource by an external identity provider.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier issued to this resource by an external identity provider.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The identifier issued to this resource by an external identity provider.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The identifier issued to this resource by an external identity provider.</p>
     */
    inline ExternalId& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier issued to this resource by an external identity provider.</p>
     */
    inline ExternalId& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier issued to this resource by an external identity provider.</p>
     */
    inline ExternalId& WithId(const char* value) { SetId(value); return *this;}

  private:

    Aws::String m_issuer;
    bool m_issuerHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;
  };

} // namespace Model
} // namespace IdentityStore
} // namespace Aws
