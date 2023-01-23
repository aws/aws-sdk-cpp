/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/athena/model/NotebookType.h>
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
namespace Athena
{
namespace Model
{

  /**
   * <p>Contains metadata for notebook, including the notebook name, ID, workgroup,
   * and time created.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/NotebookMetadata">AWS
   * API Reference</a></p>
   */
  class NotebookMetadata
  {
  public:
    AWS_ATHENA_API NotebookMetadata();
    AWS_ATHENA_API NotebookMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API NotebookMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The notebook ID.</p>
     */
    inline const Aws::String& GetNotebookId() const{ return m_notebookId; }

    /**
     * <p>The notebook ID.</p>
     */
    inline bool NotebookIdHasBeenSet() const { return m_notebookIdHasBeenSet; }

    /**
     * <p>The notebook ID.</p>
     */
    inline void SetNotebookId(const Aws::String& value) { m_notebookIdHasBeenSet = true; m_notebookId = value; }

    /**
     * <p>The notebook ID.</p>
     */
    inline void SetNotebookId(Aws::String&& value) { m_notebookIdHasBeenSet = true; m_notebookId = std::move(value); }

    /**
     * <p>The notebook ID.</p>
     */
    inline void SetNotebookId(const char* value) { m_notebookIdHasBeenSet = true; m_notebookId.assign(value); }

    /**
     * <p>The notebook ID.</p>
     */
    inline NotebookMetadata& WithNotebookId(const Aws::String& value) { SetNotebookId(value); return *this;}

    /**
     * <p>The notebook ID.</p>
     */
    inline NotebookMetadata& WithNotebookId(Aws::String&& value) { SetNotebookId(std::move(value)); return *this;}

    /**
     * <p>The notebook ID.</p>
     */
    inline NotebookMetadata& WithNotebookId(const char* value) { SetNotebookId(value); return *this;}


    /**
     * <p>The name of the notebook.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the notebook.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the notebook.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the notebook.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the notebook.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the notebook.</p>
     */
    inline NotebookMetadata& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the notebook.</p>
     */
    inline NotebookMetadata& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the notebook.</p>
     */
    inline NotebookMetadata& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The name of the Spark enabled workgroup to which the notebook belongs.</p>
     */
    inline const Aws::String& GetWorkGroup() const{ return m_workGroup; }

    /**
     * <p>The name of the Spark enabled workgroup to which the notebook belongs.</p>
     */
    inline bool WorkGroupHasBeenSet() const { return m_workGroupHasBeenSet; }

    /**
     * <p>The name of the Spark enabled workgroup to which the notebook belongs.</p>
     */
    inline void SetWorkGroup(const Aws::String& value) { m_workGroupHasBeenSet = true; m_workGroup = value; }

    /**
     * <p>The name of the Spark enabled workgroup to which the notebook belongs.</p>
     */
    inline void SetWorkGroup(Aws::String&& value) { m_workGroupHasBeenSet = true; m_workGroup = std::move(value); }

    /**
     * <p>The name of the Spark enabled workgroup to which the notebook belongs.</p>
     */
    inline void SetWorkGroup(const char* value) { m_workGroupHasBeenSet = true; m_workGroup.assign(value); }

    /**
     * <p>The name of the Spark enabled workgroup to which the notebook belongs.</p>
     */
    inline NotebookMetadata& WithWorkGroup(const Aws::String& value) { SetWorkGroup(value); return *this;}

    /**
     * <p>The name of the Spark enabled workgroup to which the notebook belongs.</p>
     */
    inline NotebookMetadata& WithWorkGroup(Aws::String&& value) { SetWorkGroup(std::move(value)); return *this;}

    /**
     * <p>The name of the Spark enabled workgroup to which the notebook belongs.</p>
     */
    inline NotebookMetadata& WithWorkGroup(const char* value) { SetWorkGroup(value); return *this;}


    /**
     * <p>The time when the notebook was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time when the notebook was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The time when the notebook was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The time when the notebook was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The time when the notebook was created.</p>
     */
    inline NotebookMetadata& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time when the notebook was created.</p>
     */
    inline NotebookMetadata& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The type of notebook. Currently, the only valid type is
     * <code>IPYNB</code>.</p>
     */
    inline const NotebookType& GetType() const{ return m_type; }

    /**
     * <p>The type of notebook. Currently, the only valid type is
     * <code>IPYNB</code>.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of notebook. Currently, the only valid type is
     * <code>IPYNB</code>.</p>
     */
    inline void SetType(const NotebookType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of notebook. Currently, the only valid type is
     * <code>IPYNB</code>.</p>
     */
    inline void SetType(NotebookType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of notebook. Currently, the only valid type is
     * <code>IPYNB</code>.</p>
     */
    inline NotebookMetadata& WithType(const NotebookType& value) { SetType(value); return *this;}

    /**
     * <p>The type of notebook. Currently, the only valid type is
     * <code>IPYNB</code>.</p>
     */
    inline NotebookMetadata& WithType(NotebookType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The time when the notebook was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>The time when the notebook was last modified.</p>
     */
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }

    /**
     * <p>The time when the notebook was last modified.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }

    /**
     * <p>The time when the notebook was last modified.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }

    /**
     * <p>The time when the notebook was last modified.</p>
     */
    inline NotebookMetadata& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>The time when the notebook was last modified.</p>
     */
    inline NotebookMetadata& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}

  private:

    Aws::String m_notebookId;
    bool m_notebookIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_workGroup;
    bool m_workGroupHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    NotebookType m_type;
    bool m_typeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
