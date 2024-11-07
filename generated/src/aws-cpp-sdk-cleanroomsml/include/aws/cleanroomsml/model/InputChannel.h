/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/cleanroomsml/model/InputChannelDataSource.h>
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
namespace CleanRoomsML
{
namespace Model
{

  /**
   * <p>Provides information about the data source that is used to create an ML input
   * channel.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/InputChannel">AWS
   * API Reference</a></p>
   */
  class InputChannel
  {
  public:
    AWS_CLEANROOMSML_API InputChannel();
    AWS_CLEANROOMSML_API InputChannel(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API InputChannel& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The data source that is used to create the ML input channel.</p>
     */
    inline const InputChannelDataSource& GetDataSource() const{ return m_dataSource; }
    inline bool DataSourceHasBeenSet() const { return m_dataSourceHasBeenSet; }
    inline void SetDataSource(const InputChannelDataSource& value) { m_dataSourceHasBeenSet = true; m_dataSource = value; }
    inline void SetDataSource(InputChannelDataSource&& value) { m_dataSourceHasBeenSet = true; m_dataSource = std::move(value); }
    inline InputChannel& WithDataSource(const InputChannelDataSource& value) { SetDataSource(value); return *this;}
    inline InputChannel& WithDataSource(InputChannelDataSource&& value) { SetDataSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the IAM role that Clean Rooms ML can assume to read the data
     * referred to in the <code>dataSource</code> field the input channel.</p>
     * <p>Passing a role across AWS accounts is not allowed. If you pass a role that
     * isn't in your account, you get an <code>AccessDeniedException</code> error.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline InputChannel& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline InputChannel& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline InputChannel& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}
  private:

    InputChannelDataSource m_dataSource;
    bool m_dataSourceHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
