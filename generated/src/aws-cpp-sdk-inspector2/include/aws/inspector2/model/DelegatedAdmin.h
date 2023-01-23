/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/model/RelationshipStatus.h>
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
namespace Inspector2
{
namespace Model
{

  /**
   * <p>Details of the Amazon Inspector delegated administrator for your
   * organization.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/DelegatedAdmin">AWS
   * API Reference</a></p>
   */
  class DelegatedAdmin
  {
  public:
    AWS_INSPECTOR2_API DelegatedAdmin();
    AWS_INSPECTOR2_API DelegatedAdmin(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API DelegatedAdmin& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Web Services account ID of the Amazon Inspector delegated
     * administrator for your organization.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The Amazon Web Services account ID of the Amazon Inspector delegated
     * administrator for your organization.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services account ID of the Amazon Inspector delegated
     * administrator for your organization.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The Amazon Web Services account ID of the Amazon Inspector delegated
     * administrator for your organization.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID of the Amazon Inspector delegated
     * administrator for your organization.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The Amazon Web Services account ID of the Amazon Inspector delegated
     * administrator for your organization.</p>
     */
    inline DelegatedAdmin& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the Amazon Inspector delegated
     * administrator for your organization.</p>
     */
    inline DelegatedAdmin& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the Amazon Inspector delegated
     * administrator for your organization.</p>
     */
    inline DelegatedAdmin& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The status of the Amazon Inspector delegated administrator.</p>
     */
    inline const RelationshipStatus& GetRelationshipStatus() const{ return m_relationshipStatus; }

    /**
     * <p>The status of the Amazon Inspector delegated administrator.</p>
     */
    inline bool RelationshipStatusHasBeenSet() const { return m_relationshipStatusHasBeenSet; }

    /**
     * <p>The status of the Amazon Inspector delegated administrator.</p>
     */
    inline void SetRelationshipStatus(const RelationshipStatus& value) { m_relationshipStatusHasBeenSet = true; m_relationshipStatus = value; }

    /**
     * <p>The status of the Amazon Inspector delegated administrator.</p>
     */
    inline void SetRelationshipStatus(RelationshipStatus&& value) { m_relationshipStatusHasBeenSet = true; m_relationshipStatus = std::move(value); }

    /**
     * <p>The status of the Amazon Inspector delegated administrator.</p>
     */
    inline DelegatedAdmin& WithRelationshipStatus(const RelationshipStatus& value) { SetRelationshipStatus(value); return *this;}

    /**
     * <p>The status of the Amazon Inspector delegated administrator.</p>
     */
    inline DelegatedAdmin& WithRelationshipStatus(RelationshipStatus&& value) { SetRelationshipStatus(std::move(value)); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    RelationshipStatus m_relationshipStatus;
    bool m_relationshipStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
