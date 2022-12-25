/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/auditmanager/model/FrameworkMetadata.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/auditmanager/model/AssessmentControlSet.h>
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
namespace AuditManager
{
namespace Model
{

  /**
   * <p> The file used to structure and automate Audit Manager assessments for a
   * given compliance standard. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/AssessmentFramework">AWS
   * API Reference</a></p>
   */
  class AssessmentFramework
  {
  public:
    AWS_AUDITMANAGER_API AssessmentFramework();
    AWS_AUDITMANAGER_API AssessmentFramework(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API AssessmentFramework& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The unique identifier for the framework. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p> The unique identifier for the framework. </p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p> The unique identifier for the framework. </p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p> The unique identifier for the framework. </p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p> The unique identifier for the framework. </p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p> The unique identifier for the framework. </p>
     */
    inline AssessmentFramework& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p> The unique identifier for the framework. </p>
     */
    inline AssessmentFramework& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p> The unique identifier for the framework. </p>
     */
    inline AssessmentFramework& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p> The Amazon Resource Name (ARN) of the framework. </p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p> The Amazon Resource Name (ARN) of the framework. </p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) of the framework. </p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) of the framework. </p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the framework. </p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the framework. </p>
     */
    inline AssessmentFramework& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the framework. </p>
     */
    inline AssessmentFramework& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the framework. </p>
     */
    inline AssessmentFramework& WithArn(const char* value) { SetArn(value); return *this;}


    
    inline const FrameworkMetadata& GetMetadata() const{ return m_metadata; }

    
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }

    
    inline void SetMetadata(const FrameworkMetadata& value) { m_metadataHasBeenSet = true; m_metadata = value; }

    
    inline void SetMetadata(FrameworkMetadata&& value) { m_metadataHasBeenSet = true; m_metadata = std::move(value); }

    
    inline AssessmentFramework& WithMetadata(const FrameworkMetadata& value) { SetMetadata(value); return *this;}

    
    inline AssessmentFramework& WithMetadata(FrameworkMetadata&& value) { SetMetadata(std::move(value)); return *this;}


    /**
     * <p> The control sets that are associated with the framework. </p>
     */
    inline const Aws::Vector<AssessmentControlSet>& GetControlSets() const{ return m_controlSets; }

    /**
     * <p> The control sets that are associated with the framework. </p>
     */
    inline bool ControlSetsHasBeenSet() const { return m_controlSetsHasBeenSet; }

    /**
     * <p> The control sets that are associated with the framework. </p>
     */
    inline void SetControlSets(const Aws::Vector<AssessmentControlSet>& value) { m_controlSetsHasBeenSet = true; m_controlSets = value; }

    /**
     * <p> The control sets that are associated with the framework. </p>
     */
    inline void SetControlSets(Aws::Vector<AssessmentControlSet>&& value) { m_controlSetsHasBeenSet = true; m_controlSets = std::move(value); }

    /**
     * <p> The control sets that are associated with the framework. </p>
     */
    inline AssessmentFramework& WithControlSets(const Aws::Vector<AssessmentControlSet>& value) { SetControlSets(value); return *this;}

    /**
     * <p> The control sets that are associated with the framework. </p>
     */
    inline AssessmentFramework& WithControlSets(Aws::Vector<AssessmentControlSet>&& value) { SetControlSets(std::move(value)); return *this;}

    /**
     * <p> The control sets that are associated with the framework. </p>
     */
    inline AssessmentFramework& AddControlSets(const AssessmentControlSet& value) { m_controlSetsHasBeenSet = true; m_controlSets.push_back(value); return *this; }

    /**
     * <p> The control sets that are associated with the framework. </p>
     */
    inline AssessmentFramework& AddControlSets(AssessmentControlSet&& value) { m_controlSetsHasBeenSet = true; m_controlSets.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    FrameworkMetadata m_metadata;
    bool m_metadataHasBeenSet = false;

    Aws::Vector<AssessmentControlSet> m_controlSets;
    bool m_controlSetsHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
