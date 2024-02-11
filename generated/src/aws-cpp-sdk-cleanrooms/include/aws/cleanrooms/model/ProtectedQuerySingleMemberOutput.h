/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
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
namespace CleanRooms
{
namespace Model
{

  /**
   * <p>Details about the member who received the query result.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/ProtectedQuerySingleMemberOutput">AWS
   * API Reference</a></p>
   */
  class ProtectedQuerySingleMemberOutput
  {
  public:
    AWS_CLEANROOMS_API ProtectedQuerySingleMemberOutput();
    AWS_CLEANROOMS_API ProtectedQuerySingleMemberOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API ProtectedQuerySingleMemberOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Web Services account ID of the member in the collaboration who can
     * receive results for the query.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The Amazon Web Services account ID of the member in the collaboration who can
     * receive results for the query.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services account ID of the member in the collaboration who can
     * receive results for the query.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The Amazon Web Services account ID of the member in the collaboration who can
     * receive results for the query.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID of the member in the collaboration who can
     * receive results for the query.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The Amazon Web Services account ID of the member in the collaboration who can
     * receive results for the query.</p>
     */
    inline ProtectedQuerySingleMemberOutput& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the member in the collaboration who can
     * receive results for the query.</p>
     */
    inline ProtectedQuerySingleMemberOutput& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the member in the collaboration who can
     * receive results for the query.</p>
     */
    inline ProtectedQuerySingleMemberOutput& WithAccountId(const char* value) { SetAccountId(value); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
