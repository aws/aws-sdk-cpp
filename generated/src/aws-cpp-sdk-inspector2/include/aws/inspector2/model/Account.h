/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/model/ResourceStatus.h>
#include <aws/inspector2/model/Status.h>
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
   * <p>An Amazon Web Services account within your environment that Amazon Inspector
   * has been enabled for.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/Account">AWS
   * API Reference</a></p>
   */
  class Account
  {
  public:
    AWS_INSPECTOR2_API Account();
    AWS_INSPECTOR2_API Account(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Account& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the Amazon Web Services account.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The ID of the Amazon Web Services account.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon Web Services account.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The ID of the Amazon Web Services account.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The ID of the Amazon Web Services account.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The ID of the Amazon Web Services account.</p>
     */
    inline Account& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account.</p>
     */
    inline Account& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account.</p>
     */
    inline Account& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>Details of the status of Amazon Inspector scans by resource type.</p>
     */
    inline const ResourceStatus& GetResourceStatus() const{ return m_resourceStatus; }

    /**
     * <p>Details of the status of Amazon Inspector scans by resource type.</p>
     */
    inline bool ResourceStatusHasBeenSet() const { return m_resourceStatusHasBeenSet; }

    /**
     * <p>Details of the status of Amazon Inspector scans by resource type.</p>
     */
    inline void SetResourceStatus(const ResourceStatus& value) { m_resourceStatusHasBeenSet = true; m_resourceStatus = value; }

    /**
     * <p>Details of the status of Amazon Inspector scans by resource type.</p>
     */
    inline void SetResourceStatus(ResourceStatus&& value) { m_resourceStatusHasBeenSet = true; m_resourceStatus = std::move(value); }

    /**
     * <p>Details of the status of Amazon Inspector scans by resource type.</p>
     */
    inline Account& WithResourceStatus(const ResourceStatus& value) { SetResourceStatus(value); return *this;}

    /**
     * <p>Details of the status of Amazon Inspector scans by resource type.</p>
     */
    inline Account& WithResourceStatus(ResourceStatus&& value) { SetResourceStatus(std::move(value)); return *this;}


    /**
     * <p>The status of Amazon Inspector for the account.</p>
     */
    inline const Status& GetStatus() const{ return m_status; }

    /**
     * <p>The status of Amazon Inspector for the account.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of Amazon Inspector for the account.</p>
     */
    inline void SetStatus(const Status& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of Amazon Inspector for the account.</p>
     */
    inline void SetStatus(Status&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of Amazon Inspector for the account.</p>
     */
    inline Account& WithStatus(const Status& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of Amazon Inspector for the account.</p>
     */
    inline Account& WithStatus(Status&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    ResourceStatus m_resourceStatus;
    bool m_resourceStatusHasBeenSet = false;

    Status m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
