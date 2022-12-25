/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Specifies a transform that writes samples of the data to an Amazon S3
   * bucket.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/Spigot">AWS API
   * Reference</a></p>
   */
  class Spigot
  {
  public:
    AWS_GLUE_API Spigot();
    AWS_GLUE_API Spigot(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Spigot& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the transform node.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the transform node.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the transform node.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the transform node.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the transform node.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the transform node.</p>
     */
    inline Spigot& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the transform node.</p>
     */
    inline Spigot& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the transform node.</p>
     */
    inline Spigot& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The data inputs identified by their node names.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInputs() const{ return m_inputs; }

    /**
     * <p>The data inputs identified by their node names.</p>
     */
    inline bool InputsHasBeenSet() const { return m_inputsHasBeenSet; }

    /**
     * <p>The data inputs identified by their node names.</p>
     */
    inline void SetInputs(const Aws::Vector<Aws::String>& value) { m_inputsHasBeenSet = true; m_inputs = value; }

    /**
     * <p>The data inputs identified by their node names.</p>
     */
    inline void SetInputs(Aws::Vector<Aws::String>&& value) { m_inputsHasBeenSet = true; m_inputs = std::move(value); }

    /**
     * <p>The data inputs identified by their node names.</p>
     */
    inline Spigot& WithInputs(const Aws::Vector<Aws::String>& value) { SetInputs(value); return *this;}

    /**
     * <p>The data inputs identified by their node names.</p>
     */
    inline Spigot& WithInputs(Aws::Vector<Aws::String>&& value) { SetInputs(std::move(value)); return *this;}

    /**
     * <p>The data inputs identified by their node names.</p>
     */
    inline Spigot& AddInputs(const Aws::String& value) { m_inputsHasBeenSet = true; m_inputs.push_back(value); return *this; }

    /**
     * <p>The data inputs identified by their node names.</p>
     */
    inline Spigot& AddInputs(Aws::String&& value) { m_inputsHasBeenSet = true; m_inputs.push_back(std::move(value)); return *this; }

    /**
     * <p>The data inputs identified by their node names.</p>
     */
    inline Spigot& AddInputs(const char* value) { m_inputsHasBeenSet = true; m_inputs.push_back(value); return *this; }


    /**
     * <p>A path in Amazon S3 where the transform will write a subset of records from
     * the dataset to a JSON file in an Amazon S3 bucket.</p>
     */
    inline const Aws::String& GetPath() const{ return m_path; }

    /**
     * <p>A path in Amazon S3 where the transform will write a subset of records from
     * the dataset to a JSON file in an Amazon S3 bucket.</p>
     */
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }

    /**
     * <p>A path in Amazon S3 where the transform will write a subset of records from
     * the dataset to a JSON file in an Amazon S3 bucket.</p>
     */
    inline void SetPath(const Aws::String& value) { m_pathHasBeenSet = true; m_path = value; }

    /**
     * <p>A path in Amazon S3 where the transform will write a subset of records from
     * the dataset to a JSON file in an Amazon S3 bucket.</p>
     */
    inline void SetPath(Aws::String&& value) { m_pathHasBeenSet = true; m_path = std::move(value); }

    /**
     * <p>A path in Amazon S3 where the transform will write a subset of records from
     * the dataset to a JSON file in an Amazon S3 bucket.</p>
     */
    inline void SetPath(const char* value) { m_pathHasBeenSet = true; m_path.assign(value); }

    /**
     * <p>A path in Amazon S3 where the transform will write a subset of records from
     * the dataset to a JSON file in an Amazon S3 bucket.</p>
     */
    inline Spigot& WithPath(const Aws::String& value) { SetPath(value); return *this;}

    /**
     * <p>A path in Amazon S3 where the transform will write a subset of records from
     * the dataset to a JSON file in an Amazon S3 bucket.</p>
     */
    inline Spigot& WithPath(Aws::String&& value) { SetPath(std::move(value)); return *this;}

    /**
     * <p>A path in Amazon S3 where the transform will write a subset of records from
     * the dataset to a JSON file in an Amazon S3 bucket.</p>
     */
    inline Spigot& WithPath(const char* value) { SetPath(value); return *this;}


    /**
     * <p>Specifies a number of records to write starting from the beginning of the
     * dataset.</p>
     */
    inline int GetTopk() const{ return m_topk; }

    /**
     * <p>Specifies a number of records to write starting from the beginning of the
     * dataset.</p>
     */
    inline bool TopkHasBeenSet() const { return m_topkHasBeenSet; }

    /**
     * <p>Specifies a number of records to write starting from the beginning of the
     * dataset.</p>
     */
    inline void SetTopk(int value) { m_topkHasBeenSet = true; m_topk = value; }

    /**
     * <p>Specifies a number of records to write starting from the beginning of the
     * dataset.</p>
     */
    inline Spigot& WithTopk(int value) { SetTopk(value); return *this;}


    /**
     * <p>The probability (a decimal value with a maximum value of 1) of picking any
     * given record. A value of 1 indicates that each row read from the dataset should
     * be included in the sample output.</p>
     */
    inline double GetProb() const{ return m_prob; }

    /**
     * <p>The probability (a decimal value with a maximum value of 1) of picking any
     * given record. A value of 1 indicates that each row read from the dataset should
     * be included in the sample output.</p>
     */
    inline bool ProbHasBeenSet() const { return m_probHasBeenSet; }

    /**
     * <p>The probability (a decimal value with a maximum value of 1) of picking any
     * given record. A value of 1 indicates that each row read from the dataset should
     * be included in the sample output.</p>
     */
    inline void SetProb(double value) { m_probHasBeenSet = true; m_prob = value; }

    /**
     * <p>The probability (a decimal value with a maximum value of 1) of picking any
     * given record. A value of 1 indicates that each row read from the dataset should
     * be included in the sample output.</p>
     */
    inline Spigot& WithProb(double value) { SetProb(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_inputs;
    bool m_inputsHasBeenSet = false;

    Aws::String m_path;
    bool m_pathHasBeenSet = false;

    int m_topk;
    bool m_topkHasBeenSet = false;

    double m_prob;
    bool m_probHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
