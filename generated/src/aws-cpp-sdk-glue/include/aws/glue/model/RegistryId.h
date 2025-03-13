/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>A wrapper structure that may contain the registry name and Amazon Resource
   * Name (ARN).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/RegistryId">AWS API
   * Reference</a></p>
   */
  class RegistryId
  {
  public:
    AWS_GLUE_API RegistryId() = default;
    AWS_GLUE_API RegistryId(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API RegistryId& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Name of the registry. Used only for lookup. One of <code>RegistryArn</code>
     * or <code>RegistryName</code> has to be provided. </p>
     */
    inline const Aws::String& GetRegistryName() const { return m_registryName; }
    inline bool RegistryNameHasBeenSet() const { return m_registryNameHasBeenSet; }
    template<typename RegistryNameT = Aws::String>
    void SetRegistryName(RegistryNameT&& value) { m_registryNameHasBeenSet = true; m_registryName = std::forward<RegistryNameT>(value); }
    template<typename RegistryNameT = Aws::String>
    RegistryId& WithRegistryName(RegistryNameT&& value) { SetRegistryName(std::forward<RegistryNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Arn of the registry to be updated. One of <code>RegistryArn</code> or
     * <code>RegistryName</code> has to be provided.</p>
     */
    inline const Aws::String& GetRegistryArn() const { return m_registryArn; }
    inline bool RegistryArnHasBeenSet() const { return m_registryArnHasBeenSet; }
    template<typename RegistryArnT = Aws::String>
    void SetRegistryArn(RegistryArnT&& value) { m_registryArnHasBeenSet = true; m_registryArn = std::forward<RegistryArnT>(value); }
    template<typename RegistryArnT = Aws::String>
    RegistryId& WithRegistryArn(RegistryArnT&& value) { SetRegistryArn(std::forward<RegistryArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_registryName;
    bool m_registryNameHasBeenSet = false;

    Aws::String m_registryArn;
    bool m_registryArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
