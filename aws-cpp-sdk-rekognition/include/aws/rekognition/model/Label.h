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
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rekognition/model/Instance.h>
#include <aws/rekognition/model/Parent.h>
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
namespace Rekognition
{
namespace Model
{

  /**
   * <p>Structure containing details about the detected label, including the name,
   * detected instances, parent labels, and level of confidence.</p> <p>
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/Label">AWS
   * API Reference</a></p>
   */
  class AWS_REKOGNITION_API Label
  {
  public:
    Label();
    Label(Aws::Utils::Json::JsonView jsonValue);
    Label& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name (label) of the object or scene.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name (label) of the object or scene.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name (label) of the object or scene.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name (label) of the object or scene.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name (label) of the object or scene.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name (label) of the object or scene.</p>
     */
    inline Label& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name (label) of the object or scene.</p>
     */
    inline Label& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name (label) of the object or scene.</p>
     */
    inline Label& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Level of confidence.</p>
     */
    inline double GetConfidence() const{ return m_confidence; }

    /**
     * <p>Level of confidence.</p>
     */
    inline bool ConfidenceHasBeenSet() const { return m_confidenceHasBeenSet; }

    /**
     * <p>Level of confidence.</p>
     */
    inline void SetConfidence(double value) { m_confidenceHasBeenSet = true; m_confidence = value; }

    /**
     * <p>Level of confidence.</p>
     */
    inline Label& WithConfidence(double value) { SetConfidence(value); return *this;}


    /**
     * <p>If <code>Label</code> represents an object, <code>Instances</code> contains
     * the bounding boxes for each instance of the detected object. Bounding boxes are
     * returned for common object labels such as people, cars, furniture, apparel or
     * pets.</p>
     */
    inline const Aws::Vector<Instance>& GetInstances() const{ return m_instances; }

    /**
     * <p>If <code>Label</code> represents an object, <code>Instances</code> contains
     * the bounding boxes for each instance of the detected object. Bounding boxes are
     * returned for common object labels such as people, cars, furniture, apparel or
     * pets.</p>
     */
    inline bool InstancesHasBeenSet() const { return m_instancesHasBeenSet; }

    /**
     * <p>If <code>Label</code> represents an object, <code>Instances</code> contains
     * the bounding boxes for each instance of the detected object. Bounding boxes are
     * returned for common object labels such as people, cars, furniture, apparel or
     * pets.</p>
     */
    inline void SetInstances(const Aws::Vector<Instance>& value) { m_instancesHasBeenSet = true; m_instances = value; }

    /**
     * <p>If <code>Label</code> represents an object, <code>Instances</code> contains
     * the bounding boxes for each instance of the detected object. Bounding boxes are
     * returned for common object labels such as people, cars, furniture, apparel or
     * pets.</p>
     */
    inline void SetInstances(Aws::Vector<Instance>&& value) { m_instancesHasBeenSet = true; m_instances = std::move(value); }

    /**
     * <p>If <code>Label</code> represents an object, <code>Instances</code> contains
     * the bounding boxes for each instance of the detected object. Bounding boxes are
     * returned for common object labels such as people, cars, furniture, apparel or
     * pets.</p>
     */
    inline Label& WithInstances(const Aws::Vector<Instance>& value) { SetInstances(value); return *this;}

    /**
     * <p>If <code>Label</code> represents an object, <code>Instances</code> contains
     * the bounding boxes for each instance of the detected object. Bounding boxes are
     * returned for common object labels such as people, cars, furniture, apparel or
     * pets.</p>
     */
    inline Label& WithInstances(Aws::Vector<Instance>&& value) { SetInstances(std::move(value)); return *this;}

    /**
     * <p>If <code>Label</code> represents an object, <code>Instances</code> contains
     * the bounding boxes for each instance of the detected object. Bounding boxes are
     * returned for common object labels such as people, cars, furniture, apparel or
     * pets.</p>
     */
    inline Label& AddInstances(const Instance& value) { m_instancesHasBeenSet = true; m_instances.push_back(value); return *this; }

    /**
     * <p>If <code>Label</code> represents an object, <code>Instances</code> contains
     * the bounding boxes for each instance of the detected object. Bounding boxes are
     * returned for common object labels such as people, cars, furniture, apparel or
     * pets.</p>
     */
    inline Label& AddInstances(Instance&& value) { m_instancesHasBeenSet = true; m_instances.push_back(std::move(value)); return *this; }


    /**
     * <p>The parent labels for a label. The response includes all ancestor labels.</p>
     */
    inline const Aws::Vector<Parent>& GetParents() const{ return m_parents; }

    /**
     * <p>The parent labels for a label. The response includes all ancestor labels.</p>
     */
    inline bool ParentsHasBeenSet() const { return m_parentsHasBeenSet; }

    /**
     * <p>The parent labels for a label. The response includes all ancestor labels.</p>
     */
    inline void SetParents(const Aws::Vector<Parent>& value) { m_parentsHasBeenSet = true; m_parents = value; }

    /**
     * <p>The parent labels for a label. The response includes all ancestor labels.</p>
     */
    inline void SetParents(Aws::Vector<Parent>&& value) { m_parentsHasBeenSet = true; m_parents = std::move(value); }

    /**
     * <p>The parent labels for a label. The response includes all ancestor labels.</p>
     */
    inline Label& WithParents(const Aws::Vector<Parent>& value) { SetParents(value); return *this;}

    /**
     * <p>The parent labels for a label. The response includes all ancestor labels.</p>
     */
    inline Label& WithParents(Aws::Vector<Parent>&& value) { SetParents(std::move(value)); return *this;}

    /**
     * <p>The parent labels for a label. The response includes all ancestor labels.</p>
     */
    inline Label& AddParents(const Parent& value) { m_parentsHasBeenSet = true; m_parents.push_back(value); return *this; }

    /**
     * <p>The parent labels for a label. The response includes all ancestor labels.</p>
     */
    inline Label& AddParents(Parent&& value) { m_parentsHasBeenSet = true; m_parents.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    double m_confidence;
    bool m_confidenceHasBeenSet;

    Aws::Vector<Instance> m_instances;
    bool m_instancesHasBeenSet;

    Aws::Vector<Parent> m_parents;
    bool m_parentsHasBeenSet;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
