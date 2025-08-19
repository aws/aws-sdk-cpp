/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/ErrorMessageType.h>
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
   * <p>A structure that defines the level of detail included in error messages
   * returned by PySpark jobs. This configuration allows you to control the verbosity
   * of error messages to help with troubleshooting PySpark jobs while maintaining
   * appropriate security controls.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/ErrorMessageConfiguration">AWS
   * API Reference</a></p>
   */
  class ErrorMessageConfiguration
  {
  public:
    AWS_CLEANROOMS_API ErrorMessageConfiguration() = default;
    AWS_CLEANROOMS_API ErrorMessageConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API ErrorMessageConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The level of detail for error messages returned by the PySpark job. When set
     * to DETAILED, error messages include more information to help troubleshoot issues
     * with your PySpark job.</p> <p>Because this setting may expose sensitive data, it
     * is recommended for development and testing environments.</p>
     */
    inline ErrorMessageType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(ErrorMessageType value) { m_typeHasBeenSet = true; m_type = value; }
    inline ErrorMessageConfiguration& WithType(ErrorMessageType value) { SetType(value); return *this;}
    ///@}
  private:

    ErrorMessageType m_type{ErrorMessageType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
