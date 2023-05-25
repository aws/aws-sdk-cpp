/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
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
namespace AuditManager
{
namespace Model
{

  /**
   * <p> The wrapper of Amazon Web Services account details, such as account ID or
   * email address. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/AWSAccount">AWS
   * API Reference</a></p>
   */
  class AWSAccount
  {
  public:
    AWS_AUDITMANAGER_API AWSAccount();
    AWS_AUDITMANAGER_API AWSAccount(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API AWSAccount& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The identifier for the Amazon Web Services account. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p> The identifier for the Amazon Web Services account. </p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p> The identifier for the Amazon Web Services account. </p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p> The identifier for the Amazon Web Services account. </p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p> The identifier for the Amazon Web Services account. </p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p> The identifier for the Amazon Web Services account. </p>
     */
    inline AWSAccount& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p> The identifier for the Amazon Web Services account. </p>
     */
    inline AWSAccount& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p> The identifier for the Amazon Web Services account. </p>
     */
    inline AWSAccount& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p> The email address that's associated with the Amazon Web Services account.
     * </p>
     */
    inline const Aws::String& GetEmailAddress() const{ return m_emailAddress; }

    /**
     * <p> The email address that's associated with the Amazon Web Services account.
     * </p>
     */
    inline bool EmailAddressHasBeenSet() const { return m_emailAddressHasBeenSet; }

    /**
     * <p> The email address that's associated with the Amazon Web Services account.
     * </p>
     */
    inline void SetEmailAddress(const Aws::String& value) { m_emailAddressHasBeenSet = true; m_emailAddress = value; }

    /**
     * <p> The email address that's associated with the Amazon Web Services account.
     * </p>
     */
    inline void SetEmailAddress(Aws::String&& value) { m_emailAddressHasBeenSet = true; m_emailAddress = std::move(value); }

    /**
     * <p> The email address that's associated with the Amazon Web Services account.
     * </p>
     */
    inline void SetEmailAddress(const char* value) { m_emailAddressHasBeenSet = true; m_emailAddress.assign(value); }

    /**
     * <p> The email address that's associated with the Amazon Web Services account.
     * </p>
     */
    inline AWSAccount& WithEmailAddress(const Aws::String& value) { SetEmailAddress(value); return *this;}

    /**
     * <p> The email address that's associated with the Amazon Web Services account.
     * </p>
     */
    inline AWSAccount& WithEmailAddress(Aws::String&& value) { SetEmailAddress(std::move(value)); return *this;}

    /**
     * <p> The email address that's associated with the Amazon Web Services account.
     * </p>
     */
    inline AWSAccount& WithEmailAddress(const char* value) { SetEmailAddress(value); return *this;}


    /**
     * <p> The name of the Amazon Web Services account. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p> The name of the Amazon Web Services account. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p> The name of the Amazon Web Services account. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p> The name of the Amazon Web Services account. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p> The name of the Amazon Web Services account. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p> The name of the Amazon Web Services account. </p>
     */
    inline AWSAccount& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p> The name of the Amazon Web Services account. </p>
     */
    inline AWSAccount& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p> The name of the Amazon Web Services account. </p>
     */
    inline AWSAccount& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_emailAddress;
    bool m_emailAddressHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
