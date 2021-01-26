/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsRdsDbParameterGroup">AWS
   * API Reference</a></p>
   */
  class AWS_SECURITYHUB_API AwsRdsDbParameterGroup
  {
  public:
    AwsRdsDbParameterGroup();
    AwsRdsDbParameterGroup(Aws::Utils::Json::JsonView jsonValue);
    AwsRdsDbParameterGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p/>
     */
    inline const Aws::String& GetDbParameterGroupName() const{ return m_dbParameterGroupName; }

    /**
     * <p/>
     */
    inline bool DbParameterGroupNameHasBeenSet() const { return m_dbParameterGroupNameHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetDbParameterGroupName(const Aws::String& value) { m_dbParameterGroupNameHasBeenSet = true; m_dbParameterGroupName = value; }

    /**
     * <p/>
     */
    inline void SetDbParameterGroupName(Aws::String&& value) { m_dbParameterGroupNameHasBeenSet = true; m_dbParameterGroupName = std::move(value); }

    /**
     * <p/>
     */
    inline void SetDbParameterGroupName(const char* value) { m_dbParameterGroupNameHasBeenSet = true; m_dbParameterGroupName.assign(value); }

    /**
     * <p/>
     */
    inline AwsRdsDbParameterGroup& WithDbParameterGroupName(const Aws::String& value) { SetDbParameterGroupName(value); return *this;}

    /**
     * <p/>
     */
    inline AwsRdsDbParameterGroup& WithDbParameterGroupName(Aws::String&& value) { SetDbParameterGroupName(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline AwsRdsDbParameterGroup& WithDbParameterGroupName(const char* value) { SetDbParameterGroupName(value); return *this;}


    /**
     * <p/>
     */
    inline const Aws::String& GetParameterApplyStatus() const{ return m_parameterApplyStatus; }

    /**
     * <p/>
     */
    inline bool ParameterApplyStatusHasBeenSet() const { return m_parameterApplyStatusHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetParameterApplyStatus(const Aws::String& value) { m_parameterApplyStatusHasBeenSet = true; m_parameterApplyStatus = value; }

    /**
     * <p/>
     */
    inline void SetParameterApplyStatus(Aws::String&& value) { m_parameterApplyStatusHasBeenSet = true; m_parameterApplyStatus = std::move(value); }

    /**
     * <p/>
     */
    inline void SetParameterApplyStatus(const char* value) { m_parameterApplyStatusHasBeenSet = true; m_parameterApplyStatus.assign(value); }

    /**
     * <p/>
     */
    inline AwsRdsDbParameterGroup& WithParameterApplyStatus(const Aws::String& value) { SetParameterApplyStatus(value); return *this;}

    /**
     * <p/>
     */
    inline AwsRdsDbParameterGroup& WithParameterApplyStatus(Aws::String&& value) { SetParameterApplyStatus(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline AwsRdsDbParameterGroup& WithParameterApplyStatus(const char* value) { SetParameterApplyStatus(value); return *this;}

  private:

    Aws::String m_dbParameterGroupName;
    bool m_dbParameterGroupNameHasBeenSet;

    Aws::String m_parameterApplyStatus;
    bool m_parameterApplyStatusHasBeenSet;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
