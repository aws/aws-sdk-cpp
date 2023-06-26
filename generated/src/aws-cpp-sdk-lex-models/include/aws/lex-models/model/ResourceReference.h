/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lex-models/LexModelBuildingService_EXPORTS.h>
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
namespace LexModelBuildingService
{
namespace Model
{

  /**
   * <p>Describes the resource that refers to the resource that you are attempting to
   * delete. This object is returned as part of the
   * <code>ResourceInUseException</code> exception. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/ResourceReference">AWS
   * API Reference</a></p>
   */
  class ResourceReference
  {
  public:
    AWS_LEXMODELBUILDINGSERVICE_API ResourceReference();
    AWS_LEXMODELBUILDINGSERVICE_API ResourceReference(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELBUILDINGSERVICE_API ResourceReference& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELBUILDINGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the resource that is using the resource that you are trying to
     * delete.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the resource that is using the resource that you are trying to
     * delete.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the resource that is using the resource that you are trying to
     * delete.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the resource that is using the resource that you are trying to
     * delete.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the resource that is using the resource that you are trying to
     * delete.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the resource that is using the resource that you are trying to
     * delete.</p>
     */
    inline ResourceReference& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the resource that is using the resource that you are trying to
     * delete.</p>
     */
    inline ResourceReference& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the resource that is using the resource that you are trying to
     * delete.</p>
     */
    inline ResourceReference& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The version of the resource that is using the resource that you are trying to
     * delete.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The version of the resource that is using the resource that you are trying to
     * delete.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The version of the resource that is using the resource that you are trying to
     * delete.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The version of the resource that is using the resource that you are trying to
     * delete.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>The version of the resource that is using the resource that you are trying to
     * delete.</p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>The version of the resource that is using the resource that you are trying to
     * delete.</p>
     */
    inline ResourceReference& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The version of the resource that is using the resource that you are trying to
     * delete.</p>
     */
    inline ResourceReference& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the resource that is using the resource that you are trying to
     * delete.</p>
     */
    inline ResourceReference& WithVersion(const char* value) { SetVersion(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
