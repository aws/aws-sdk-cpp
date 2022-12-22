/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLake_EXPORTS.h>
#include <aws/securitylake/model/AwsLogSourceType.h>
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
namespace SecurityLake
{
namespace Model
{

  /**
   * <p>The supported source types from which logs and events are collected in Amazon
   * Security Lake. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securitylake-2018-05-10/SourceType">AWS
   * API Reference</a></p>
   */
  class SourceType
  {
  public:
    AWS_SECURITYLAKE_API SourceType();
    AWS_SECURITYLAKE_API SourceType(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYLAKE_API SourceType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYLAKE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Amazon Security Lake supports logs and events collection for
     * natively-supported Amazon Web Services services. For more information, see the
     * Amazon Security Lake User Guide.</p>
     */
    inline const AwsLogSourceType& GetAwsSourceType() const{ return m_awsSourceType; }

    /**
     * <p>Amazon Security Lake supports logs and events collection for
     * natively-supported Amazon Web Services services. For more information, see the
     * Amazon Security Lake User Guide.</p>
     */
    inline bool AwsSourceTypeHasBeenSet() const { return m_awsSourceTypeHasBeenSet; }

    /**
     * <p>Amazon Security Lake supports logs and events collection for
     * natively-supported Amazon Web Services services. For more information, see the
     * Amazon Security Lake User Guide.</p>
     */
    inline void SetAwsSourceType(const AwsLogSourceType& value) { m_awsSourceTypeHasBeenSet = true; m_awsSourceType = value; }

    /**
     * <p>Amazon Security Lake supports logs and events collection for
     * natively-supported Amazon Web Services services. For more information, see the
     * Amazon Security Lake User Guide.</p>
     */
    inline void SetAwsSourceType(AwsLogSourceType&& value) { m_awsSourceTypeHasBeenSet = true; m_awsSourceType = std::move(value); }

    /**
     * <p>Amazon Security Lake supports logs and events collection for
     * natively-supported Amazon Web Services services. For more information, see the
     * Amazon Security Lake User Guide.</p>
     */
    inline SourceType& WithAwsSourceType(const AwsLogSourceType& value) { SetAwsSourceType(value); return *this;}

    /**
     * <p>Amazon Security Lake supports logs and events collection for
     * natively-supported Amazon Web Services services. For more information, see the
     * Amazon Security Lake User Guide.</p>
     */
    inline SourceType& WithAwsSourceType(AwsLogSourceType&& value) { SetAwsSourceType(std::move(value)); return *this;}


    /**
     * <p>Amazon Security Lake supports custom source types. For the detailed list, see
     * the Amazon Security Lake User Guide.</p>
     */
    inline const Aws::String& GetCustomSourceType() const{ return m_customSourceType; }

    /**
     * <p>Amazon Security Lake supports custom source types. For the detailed list, see
     * the Amazon Security Lake User Guide.</p>
     */
    inline bool CustomSourceTypeHasBeenSet() const { return m_customSourceTypeHasBeenSet; }

    /**
     * <p>Amazon Security Lake supports custom source types. For the detailed list, see
     * the Amazon Security Lake User Guide.</p>
     */
    inline void SetCustomSourceType(const Aws::String& value) { m_customSourceTypeHasBeenSet = true; m_customSourceType = value; }

    /**
     * <p>Amazon Security Lake supports custom source types. For the detailed list, see
     * the Amazon Security Lake User Guide.</p>
     */
    inline void SetCustomSourceType(Aws::String&& value) { m_customSourceTypeHasBeenSet = true; m_customSourceType = std::move(value); }

    /**
     * <p>Amazon Security Lake supports custom source types. For the detailed list, see
     * the Amazon Security Lake User Guide.</p>
     */
    inline void SetCustomSourceType(const char* value) { m_customSourceTypeHasBeenSet = true; m_customSourceType.assign(value); }

    /**
     * <p>Amazon Security Lake supports custom source types. For the detailed list, see
     * the Amazon Security Lake User Guide.</p>
     */
    inline SourceType& WithCustomSourceType(const Aws::String& value) { SetCustomSourceType(value); return *this;}

    /**
     * <p>Amazon Security Lake supports custom source types. For the detailed list, see
     * the Amazon Security Lake User Guide.</p>
     */
    inline SourceType& WithCustomSourceType(Aws::String&& value) { SetCustomSourceType(std::move(value)); return *this;}

    /**
     * <p>Amazon Security Lake supports custom source types. For the detailed list, see
     * the Amazon Security Lake User Guide.</p>
     */
    inline SourceType& WithCustomSourceType(const char* value) { SetCustomSourceType(value); return *this;}

  private:

    AwsLogSourceType m_awsSourceType;
    bool m_awsSourceTypeHasBeenSet = false;

    Aws::String m_customSourceType;
    bool m_customSourceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
