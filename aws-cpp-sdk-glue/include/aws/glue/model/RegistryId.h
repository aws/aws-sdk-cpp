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
    AWS_GLUE_API RegistryId();
    AWS_GLUE_API RegistryId(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API RegistryId& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Name of the registry. Used only for lookup. One of <code>RegistryArn</code>
     * or <code>RegistryName</code> has to be provided. </p>
     */
    inline const Aws::String& GetRegistryName() const{ return m_registryName; }

    /**
     * <p>Name of the registry. Used only for lookup. One of <code>RegistryArn</code>
     * or <code>RegistryName</code> has to be provided. </p>
     */
    inline bool RegistryNameHasBeenSet() const { return m_registryNameHasBeenSet; }

    /**
     * <p>Name of the registry. Used only for lookup. One of <code>RegistryArn</code>
     * or <code>RegistryName</code> has to be provided. </p>
     */
    inline void SetRegistryName(const Aws::String& value) { m_registryNameHasBeenSet = true; m_registryName = value; }

    /**
     * <p>Name of the registry. Used only for lookup. One of <code>RegistryArn</code>
     * or <code>RegistryName</code> has to be provided. </p>
     */
    inline void SetRegistryName(Aws::String&& value) { m_registryNameHasBeenSet = true; m_registryName = std::move(value); }

    /**
     * <p>Name of the registry. Used only for lookup. One of <code>RegistryArn</code>
     * or <code>RegistryName</code> has to be provided. </p>
     */
    inline void SetRegistryName(const char* value) { m_registryNameHasBeenSet = true; m_registryName.assign(value); }

    /**
     * <p>Name of the registry. Used only for lookup. One of <code>RegistryArn</code>
     * or <code>RegistryName</code> has to be provided. </p>
     */
    inline RegistryId& WithRegistryName(const Aws::String& value) { SetRegistryName(value); return *this;}

    /**
     * <p>Name of the registry. Used only for lookup. One of <code>RegistryArn</code>
     * or <code>RegistryName</code> has to be provided. </p>
     */
    inline RegistryId& WithRegistryName(Aws::String&& value) { SetRegistryName(std::move(value)); return *this;}

    /**
     * <p>Name of the registry. Used only for lookup. One of <code>RegistryArn</code>
     * or <code>RegistryName</code> has to be provided. </p>
     */
    inline RegistryId& WithRegistryName(const char* value) { SetRegistryName(value); return *this;}


    /**
     * <p>Arn of the registry to be updated. One of <code>RegistryArn</code> or
     * <code>RegistryName</code> has to be provided.</p>
     */
    inline const Aws::String& GetRegistryArn() const{ return m_registryArn; }

    /**
     * <p>Arn of the registry to be updated. One of <code>RegistryArn</code> or
     * <code>RegistryName</code> has to be provided.</p>
     */
    inline bool RegistryArnHasBeenSet() const { return m_registryArnHasBeenSet; }

    /**
     * <p>Arn of the registry to be updated. One of <code>RegistryArn</code> or
     * <code>RegistryName</code> has to be provided.</p>
     */
    inline void SetRegistryArn(const Aws::String& value) { m_registryArnHasBeenSet = true; m_registryArn = value; }

    /**
     * <p>Arn of the registry to be updated. One of <code>RegistryArn</code> or
     * <code>RegistryName</code> has to be provided.</p>
     */
    inline void SetRegistryArn(Aws::String&& value) { m_registryArnHasBeenSet = true; m_registryArn = std::move(value); }

    /**
     * <p>Arn of the registry to be updated. One of <code>RegistryArn</code> or
     * <code>RegistryName</code> has to be provided.</p>
     */
    inline void SetRegistryArn(const char* value) { m_registryArnHasBeenSet = true; m_registryArn.assign(value); }

    /**
     * <p>Arn of the registry to be updated. One of <code>RegistryArn</code> or
     * <code>RegistryName</code> has to be provided.</p>
     */
    inline RegistryId& WithRegistryArn(const Aws::String& value) { SetRegistryArn(value); return *this;}

    /**
     * <p>Arn of the registry to be updated. One of <code>RegistryArn</code> or
     * <code>RegistryName</code> has to be provided.</p>
     */
    inline RegistryId& WithRegistryArn(Aws::String&& value) { SetRegistryArn(std::move(value)); return *this;}

    /**
     * <p>Arn of the registry to be updated. One of <code>RegistryArn</code> or
     * <code>RegistryName</code> has to be provided.</p>
     */
    inline RegistryId& WithRegistryArn(const char* value) { SetRegistryArn(value); return *this;}

  private:

    Aws::String m_registryName;
    bool m_registryNameHasBeenSet = false;

    Aws::String m_registryArn;
    bool m_registryArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
