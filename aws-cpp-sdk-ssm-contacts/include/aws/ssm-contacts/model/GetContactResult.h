/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-contacts/SSMContacts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm-contacts/model/ContactType.h>
#include <aws/ssm-contacts/model/Plan.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SSMContacts
{
namespace Model
{
  class GetContactResult
  {
  public:
    AWS_SSMCONTACTS_API GetContactResult();
    AWS_SSMCONTACTS_API GetContactResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSMCONTACTS_API GetContactResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the contact or escalation plan.</p>
     */
    inline const Aws::String& GetContactArn() const{ return m_contactArn; }

    /**
     * <p>The ARN of the contact or escalation plan.</p>
     */
    inline void SetContactArn(const Aws::String& value) { m_contactArn = value; }

    /**
     * <p>The ARN of the contact or escalation plan.</p>
     */
    inline void SetContactArn(Aws::String&& value) { m_contactArn = std::move(value); }

    /**
     * <p>The ARN of the contact or escalation plan.</p>
     */
    inline void SetContactArn(const char* value) { m_contactArn.assign(value); }

    /**
     * <p>The ARN of the contact or escalation plan.</p>
     */
    inline GetContactResult& WithContactArn(const Aws::String& value) { SetContactArn(value); return *this;}

    /**
     * <p>The ARN of the contact or escalation plan.</p>
     */
    inline GetContactResult& WithContactArn(Aws::String&& value) { SetContactArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the contact or escalation plan.</p>
     */
    inline GetContactResult& WithContactArn(const char* value) { SetContactArn(value); return *this;}


    /**
     * <p>The alias of the contact or escalation plan. The alias is unique and
     * identifiable.</p>
     */
    inline const Aws::String& GetAlias() const{ return m_alias; }

    /**
     * <p>The alias of the contact or escalation plan. The alias is unique and
     * identifiable.</p>
     */
    inline void SetAlias(const Aws::String& value) { m_alias = value; }

    /**
     * <p>The alias of the contact or escalation plan. The alias is unique and
     * identifiable.</p>
     */
    inline void SetAlias(Aws::String&& value) { m_alias = std::move(value); }

    /**
     * <p>The alias of the contact or escalation plan. The alias is unique and
     * identifiable.</p>
     */
    inline void SetAlias(const char* value) { m_alias.assign(value); }

    /**
     * <p>The alias of the contact or escalation plan. The alias is unique and
     * identifiable.</p>
     */
    inline GetContactResult& WithAlias(const Aws::String& value) { SetAlias(value); return *this;}

    /**
     * <p>The alias of the contact or escalation plan. The alias is unique and
     * identifiable.</p>
     */
    inline GetContactResult& WithAlias(Aws::String&& value) { SetAlias(std::move(value)); return *this;}

    /**
     * <p>The alias of the contact or escalation plan. The alias is unique and
     * identifiable.</p>
     */
    inline GetContactResult& WithAlias(const char* value) { SetAlias(value); return *this;}


    /**
     * <p>The full name of the contact or escalation plan.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>The full name of the contact or escalation plan.</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayName = value; }

    /**
     * <p>The full name of the contact or escalation plan.</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayName = std::move(value); }

    /**
     * <p>The full name of the contact or escalation plan.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayName.assign(value); }

    /**
     * <p>The full name of the contact or escalation plan.</p>
     */
    inline GetContactResult& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>The full name of the contact or escalation plan.</p>
     */
    inline GetContactResult& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>The full name of the contact or escalation plan.</p>
     */
    inline GetContactResult& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}


    /**
     * <p>The type of contact, either <code>PERSONAL</code> or <code>ESCALATION</code>.
     * </p>
     */
    inline const ContactType& GetType() const{ return m_type; }

    /**
     * <p>The type of contact, either <code>PERSONAL</code> or <code>ESCALATION</code>.
     * </p>
     */
    inline void SetType(const ContactType& value) { m_type = value; }

    /**
     * <p>The type of contact, either <code>PERSONAL</code> or <code>ESCALATION</code>.
     * </p>
     */
    inline void SetType(ContactType&& value) { m_type = std::move(value); }

    /**
     * <p>The type of contact, either <code>PERSONAL</code> or <code>ESCALATION</code>.
     * </p>
     */
    inline GetContactResult& WithType(const ContactType& value) { SetType(value); return *this;}

    /**
     * <p>The type of contact, either <code>PERSONAL</code> or <code>ESCALATION</code>.
     * </p>
     */
    inline GetContactResult& WithType(ContactType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>Details about the specific timing or stages and targets of the escalation
     * plan or engagement plan.</p>
     */
    inline const Plan& GetPlan() const{ return m_plan; }

    /**
     * <p>Details about the specific timing or stages and targets of the escalation
     * plan or engagement plan.</p>
     */
    inline void SetPlan(const Plan& value) { m_plan = value; }

    /**
     * <p>Details about the specific timing or stages and targets of the escalation
     * plan or engagement plan.</p>
     */
    inline void SetPlan(Plan&& value) { m_plan = std::move(value); }

    /**
     * <p>Details about the specific timing or stages and targets of the escalation
     * plan or engagement plan.</p>
     */
    inline GetContactResult& WithPlan(const Plan& value) { SetPlan(value); return *this;}

    /**
     * <p>Details about the specific timing or stages and targets of the escalation
     * plan or engagement plan.</p>
     */
    inline GetContactResult& WithPlan(Plan&& value) { SetPlan(std::move(value)); return *this;}

  private:

    Aws::String m_contactArn;

    Aws::String m_alias;

    Aws::String m_displayName;

    ContactType m_type;

    Plan m_plan;
  };

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
