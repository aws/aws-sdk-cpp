/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>The account ID of a project.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/AwsAccount">AWS
   * API Reference</a></p>
   */
  class AwsAccount
  {
  public:
    AWS_DATAZONE_API AwsAccount() = default;
    AWS_DATAZONE_API AwsAccount(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API AwsAccount& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The account ID of a project.</p>
     */
    inline const Aws::String& GetAwsAccountId() const { return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    template<typename AwsAccountIdT = Aws::String>
    void SetAwsAccountId(AwsAccountIdT&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::forward<AwsAccountIdT>(value); }
    template<typename AwsAccountIdT = Aws::String>
    AwsAccount& WithAwsAccountId(AwsAccountIdT&& value) { SetAwsAccountId(std::forward<AwsAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The account ID path of a project.</p>
     */
    inline const Aws::String& GetAwsAccountIdPath() const { return m_awsAccountIdPath; }
    inline bool AwsAccountIdPathHasBeenSet() const { return m_awsAccountIdPathHasBeenSet; }
    template<typename AwsAccountIdPathT = Aws::String>
    void SetAwsAccountIdPath(AwsAccountIdPathT&& value) { m_awsAccountIdPathHasBeenSet = true; m_awsAccountIdPath = std::forward<AwsAccountIdPathT>(value); }
    template<typename AwsAccountIdPathT = Aws::String>
    AwsAccount& WithAwsAccountIdPath(AwsAccountIdPathT&& value) { SetAwsAccountIdPath(std::forward<AwsAccountIdPathT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::String m_awsAccountIdPath;
    bool m_awsAccountIdPathHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
