/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/AwsConsoleLinkParameters.h>
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
   * <p>The parameters of the environment action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/ActionParameters">AWS
   * API Reference</a></p>
   */
  class ActionParameters
  {
  public:
    AWS_DATAZONE_API ActionParameters();
    AWS_DATAZONE_API ActionParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API ActionParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The console link specified as part of the environment action.</p>
     */
    inline const AwsConsoleLinkParameters& GetAwsConsoleLink() const{ return m_awsConsoleLink; }
    inline bool AwsConsoleLinkHasBeenSet() const { return m_awsConsoleLinkHasBeenSet; }
    inline void SetAwsConsoleLink(const AwsConsoleLinkParameters& value) { m_awsConsoleLinkHasBeenSet = true; m_awsConsoleLink = value; }
    inline void SetAwsConsoleLink(AwsConsoleLinkParameters&& value) { m_awsConsoleLinkHasBeenSet = true; m_awsConsoleLink = std::move(value); }
    inline ActionParameters& WithAwsConsoleLink(const AwsConsoleLinkParameters& value) { SetAwsConsoleLink(value); return *this;}
    inline ActionParameters& WithAwsConsoleLink(AwsConsoleLinkParameters&& value) { SetAwsConsoleLink(std::move(value)); return *this;}
    ///@}
  private:

    AwsConsoleLinkParameters m_awsConsoleLink;
    bool m_awsConsoleLinkHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
