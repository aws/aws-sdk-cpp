/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/model/SessionContextAttributes.h>
#include <aws/macie2/model/SessionIssuer.h>
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
namespace Macie2
{
namespace Model
{

  /**
   * <p>Provides information about a session that was created for an entity that
   * performed an action by using temporary security credentials.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/SessionContext">AWS
   * API Reference</a></p>
   */
  class SessionContext
  {
  public:
    AWS_MACIE2_API SessionContext();
    AWS_MACIE2_API SessionContext(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API SessionContext& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The date and time when the credentials were issued, and whether the
     * credentials were authenticated with a multi-factor authentication (MFA)
     * device.</p>
     */
    inline const SessionContextAttributes& GetAttributes() const{ return m_attributes; }

    /**
     * <p>The date and time when the credentials were issued, and whether the
     * credentials were authenticated with a multi-factor authentication (MFA)
     * device.</p>
     */
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }

    /**
     * <p>The date and time when the credentials were issued, and whether the
     * credentials were authenticated with a multi-factor authentication (MFA)
     * device.</p>
     */
    inline void SetAttributes(const SessionContextAttributes& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>The date and time when the credentials were issued, and whether the
     * credentials were authenticated with a multi-factor authentication (MFA)
     * device.</p>
     */
    inline void SetAttributes(SessionContextAttributes&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }

    /**
     * <p>The date and time when the credentials were issued, and whether the
     * credentials were authenticated with a multi-factor authentication (MFA)
     * device.</p>
     */
    inline SessionContext& WithAttributes(const SessionContextAttributes& value) { SetAttributes(value); return *this;}

    /**
     * <p>The date and time when the credentials were issued, and whether the
     * credentials were authenticated with a multi-factor authentication (MFA)
     * device.</p>
     */
    inline SessionContext& WithAttributes(SessionContextAttributes&& value) { SetAttributes(std::move(value)); return *this;}


    /**
     * <p>The source and type of credentials that were issued to the entity.</p>
     */
    inline const SessionIssuer& GetSessionIssuer() const{ return m_sessionIssuer; }

    /**
     * <p>The source and type of credentials that were issued to the entity.</p>
     */
    inline bool SessionIssuerHasBeenSet() const { return m_sessionIssuerHasBeenSet; }

    /**
     * <p>The source and type of credentials that were issued to the entity.</p>
     */
    inline void SetSessionIssuer(const SessionIssuer& value) { m_sessionIssuerHasBeenSet = true; m_sessionIssuer = value; }

    /**
     * <p>The source and type of credentials that were issued to the entity.</p>
     */
    inline void SetSessionIssuer(SessionIssuer&& value) { m_sessionIssuerHasBeenSet = true; m_sessionIssuer = std::move(value); }

    /**
     * <p>The source and type of credentials that were issued to the entity.</p>
     */
    inline SessionContext& WithSessionIssuer(const SessionIssuer& value) { SetSessionIssuer(value); return *this;}

    /**
     * <p>The source and type of credentials that were issued to the entity.</p>
     */
    inline SessionContext& WithSessionIssuer(SessionIssuer&& value) { SetSessionIssuer(std::move(value)); return *this;}

  private:

    SessionContextAttributes m_attributes;
    bool m_attributesHasBeenSet = false;

    SessionIssuer m_sessionIssuer;
    bool m_sessionIssuerHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
