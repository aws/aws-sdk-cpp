/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/SnapshotTaskDetail.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes an import snapshot task.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ImportSnapshotTask">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API ImportSnapshotTask
  {
  public:
    ImportSnapshotTask();
    ImportSnapshotTask(const Aws::Utils::Xml::XmlNode& xmlNode);
    ImportSnapshotTask& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>A description of the import snapshot task.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the import snapshot task.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the import snapshot task.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the import snapshot task.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the import snapshot task.</p>
     */
    inline ImportSnapshotTask& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the import snapshot task.</p>
     */
    inline ImportSnapshotTask& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the import snapshot task.</p>
     */
    inline ImportSnapshotTask& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The ID of the import snapshot task.</p>
     */
    inline const Aws::String& GetImportTaskId() const{ return m_importTaskId; }

    /**
     * <p>The ID of the import snapshot task.</p>
     */
    inline void SetImportTaskId(const Aws::String& value) { m_importTaskIdHasBeenSet = true; m_importTaskId = value; }

    /**
     * <p>The ID of the import snapshot task.</p>
     */
    inline void SetImportTaskId(Aws::String&& value) { m_importTaskIdHasBeenSet = true; m_importTaskId = std::move(value); }

    /**
     * <p>The ID of the import snapshot task.</p>
     */
    inline void SetImportTaskId(const char* value) { m_importTaskIdHasBeenSet = true; m_importTaskId.assign(value); }

    /**
     * <p>The ID of the import snapshot task.</p>
     */
    inline ImportSnapshotTask& WithImportTaskId(const Aws::String& value) { SetImportTaskId(value); return *this;}

    /**
     * <p>The ID of the import snapshot task.</p>
     */
    inline ImportSnapshotTask& WithImportTaskId(Aws::String&& value) { SetImportTaskId(std::move(value)); return *this;}

    /**
     * <p>The ID of the import snapshot task.</p>
     */
    inline ImportSnapshotTask& WithImportTaskId(const char* value) { SetImportTaskId(value); return *this;}


    /**
     * <p>Describes an import snapshot task.</p>
     */
    inline const SnapshotTaskDetail& GetSnapshotTaskDetail() const{ return m_snapshotTaskDetail; }

    /**
     * <p>Describes an import snapshot task.</p>
     */
    inline void SetSnapshotTaskDetail(const SnapshotTaskDetail& value) { m_snapshotTaskDetailHasBeenSet = true; m_snapshotTaskDetail = value; }

    /**
     * <p>Describes an import snapshot task.</p>
     */
    inline void SetSnapshotTaskDetail(SnapshotTaskDetail&& value) { m_snapshotTaskDetailHasBeenSet = true; m_snapshotTaskDetail = std::move(value); }

    /**
     * <p>Describes an import snapshot task.</p>
     */
    inline ImportSnapshotTask& WithSnapshotTaskDetail(const SnapshotTaskDetail& value) { SetSnapshotTaskDetail(value); return *this;}

    /**
     * <p>Describes an import snapshot task.</p>
     */
    inline ImportSnapshotTask& WithSnapshotTaskDetail(SnapshotTaskDetail&& value) { SetSnapshotTaskDetail(std::move(value)); return *this;}

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_importTaskId;
    bool m_importTaskIdHasBeenSet;

    SnapshotTaskDetail m_snapshotTaskDetail;
    bool m_snapshotTaskDetailHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
